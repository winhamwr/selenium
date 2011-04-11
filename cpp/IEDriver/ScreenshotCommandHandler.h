#ifndef WEBDRIVER_IE_SCREENSHOTCOMMANDHANDLER_H_
#define WEBDRIVER_IE_SCREENSHOTCOMMANDHANDLER_H_

#include "Session.h"
#include "logging.h"
#include <atlimage.h>
#include <atlenc.h>

namespace webdriver {

class ScreenshotCommandHandler : public WebDriverCommandHandler {
public:
	ScreenshotCommandHandler(void) {
		this->image_ = NULL;
	}

	virtual ~ScreenshotCommandHandler(void) {
	}

protected:
	void ScreenshotCommandHandler::ExecuteInternal(const Session& session, const LocatorMap& locator_parameters, const ParametersMap& command_parameters, WebDriverResponse * response) {
		BrowserHandle browser_wrapper;
		session.GetCurrentBrowser(&browser_wrapper);
		
		this->image_ = new CImage();
		HRESULT hr = this->CaptureBrowser(browser_wrapper->GetWindowHandle());
		if (FAILED(hr)) {
			response->SetResponse(SUCCESS, "");
			return;
		}

		std::string base64_screenshot = "";
		hr = this->GetBase64Data(base64_screenshot);
		if (FAILED(hr)) {
			response->SetResponse(SUCCESS, "");
			return;
		}

		response->SetResponse(SUCCESS, base64_screenshot);
		delete this->image_;
	}

private:
	ATL::CImage* image_;

	HRESULT ScreenshotCommandHandler::CaptureBrowser(HWND content_window_handle) {
		RECT window_rect;
		::GetWindowRect(content_window_handle, &window_rect);
		int width = window_rect.right - window_rect.left;
		int height = window_rect.bottom - window_rect.top;
		this->image_->Create(width, height, 16);
		HDC device_context_handle = this->image_->GetDC();
		BOOL result = ::PrintWindow(content_window_handle, device_context_handle, PW_CLIENTONLY);
		if (!result) {
			// Could not draw.
			LOG(WARN) << "PrintWindow failed";
			this->image_->ReleaseDC();
			return E_FAIL;
		}

		this->image_->ReleaseDC();
		return S_OK;
	}

	bool ScreenshotCommandHandler::GetImageSize(SIZE* size_pointer) {
		if (this->image_ == NULL) {
			LOG(WARN) << "GetSize called without an image";
			return false;
		}
		size_pointer->cx = this->image_->GetWidth();
		size_pointer->cy = this->image_->GetHeight();
		return true;
	}

	HRESULT ScreenshotCommandHandler::GetBase64Data(std::string& data) {
		if (this->image_ == NULL) {
			// CImage was not initialized.
			return E_POINTER;
		}

		CComPtr<IStream> stream;
		HRESULT hr = ::CreateStreamOnHGlobal(NULL, TRUE, &stream);
		if (FAILED(hr)) {
			LOGHR(WARN, hr) << "Error creating IStream";
			return hr;
		}

		hr = this->image_->Save(stream, Gdiplus::ImageFormatPNG);
		if (FAILED(hr)) {
			LOGHR(WARN, hr) << "Saving image failed";
			return hr;
		}

		// Get the size of the stream.
		STATSTG statstg;
		hr = stream->Stat(&statstg, STATFLAG_DEFAULT);
		if (FAILED(hr)) {
			LOGHR(WARN, hr) << "No stat on stream";
			return hr;
		}

		HGLOBAL global_memory_handle = NULL;
		hr = ::GetHGlobalFromStream(stream, &global_memory_handle);
		if (FAILED(hr)) {
		    LOGHR(WARN, hr) << "No HGlobal in stream";
			return hr;
		}

		// TODO: What if the file is bigger than max_int?
		// LOG(INFO) << "Size of stream: " << statstg.cbSize.QuadPart;
		int length = ::Base64EncodeGetRequiredLength(static_cast<int>(statstg.cbSize.QuadPart), ATL_BASE64_FLAG_NOCRLF);
		if (length <= 0) {
			LOG(WARN) << "Got zero or negative length from base64 required length";
			return E_FAIL;
		}

		char *data_array = new char[length + 1];
		if (!::Base64Encode(reinterpret_cast<BYTE*>(::GlobalLock(global_memory_handle)), (int)statstg.cbSize.QuadPart, data_array, &length, ATL_BASE64_FLAG_NOCRLF)) {
			delete[] data_array;
			::GlobalUnlock(global_memory_handle);
			LOG(WARN) << "Failure encoding to base64";
			return E_FAIL;
		}
		data_array[length] = '\0';
		data = data_array;

		delete[] data_array;
		::GlobalUnlock(global_memory_handle);

		return S_OK;
	}

};

} // namespace webdriver

#endif // WEBDRIVER_IE_ADDCOOKIECOMMANDHANDLER_H_
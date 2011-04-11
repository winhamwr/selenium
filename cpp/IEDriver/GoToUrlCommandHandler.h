#ifndef WEBDRIVER_IE_GOTOURLCOMMANDHANDLER_H_
#define WEBDRIVER_IE_GOTOURLCOMMANDHANDLER_H_

#include "Session.h"

namespace webdriver {

class GoToUrlCommandHandler : public WebDriverCommandHandler {
public:
	GoToUrlCommandHandler(void) {
	}

	virtual ~GoToUrlCommandHandler(void) {
	}

protected:
	void GoToUrlCommandHandler::ExecuteInternal(const Session& session, const LocatorMap& locator_parameters, const ParametersMap& command_parameters, WebDriverResponse * response) {
		ParametersMap::const_iterator url_parameter_iterator = command_parameters.find("url");
		if (url_parameter_iterator == command_parameters.end()) {
			response->SetErrorResponse(400, "Missing parameter: url");
			return;
		} else {
			BrowserHandle browser_wrapper;
			int status_code = session.GetCurrentBrowser(&browser_wrapper);
			if (status_code != SUCCESS) {
				response->SetErrorResponse(status_code, "Unable to get browser");
				return;
			}
			std::wstring url = CA2W(url_parameter_iterator->second.asString().c_str(), CP_UTF8);
			CComVariant url_variant(url.c_str());
			CComVariant dummy;

			// TODO: check result for error
			status_code = browser_wrapper->NavigateToUrl(url);
			browser_wrapper->SetFocusedFrameByElement(NULL);
			response->SetResponse(SUCCESS, Json::Value::null);
		}
	}
};

} // namespace webdriver

#endif // WEBDRIVER_IE_GOTOURLCOMMANDHANDLER_H_

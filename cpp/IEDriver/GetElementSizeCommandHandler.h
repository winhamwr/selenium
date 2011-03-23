#ifndef WEBDRIVER_IE_GETELEMENTSIZECOMMANDHANDLER_H_
#define WEBDRIVER_IE_GETELEMENTSIZECOMMANDHANDLER_H_

#include "Session.h"

namespace webdriver {

class GetElementSizeCommandHandler : public WebDriverCommandHandler {
public:
	GetElementSizeCommandHandler(void) {
	}

	virtual ~GetElementSizeCommandHandler(void) {
	}

protected:
	void GetElementSizeCommandHandler::ExecuteInternal(const Session& session, const LocatorMap& locator_parameters, const ParametersMap& command_parameters, WebDriverResponse * response) {
		LocatorMap::const_iterator id_parameter_iterator = locator_parameters.find("id");
		if (id_parameter_iterator == locator_parameters.end()) {
			response->SetErrorResponse(400, "Missing parameter in URL: id");
			return;
		} else {
			std::wstring element_id(CA2W(id_parameter_iterator->second.c_str(), CP_UTF8));

			BrowserHandle browser_wrapper;
			int status_code = session.GetCurrentBrowser(&browser_wrapper);
			if (status_code != SUCCESS) {
				response->SetErrorResponse(status_code, "Unable to get browser");
				return;
			}

			ElementHandle element_wrapper;
			status_code = this->GetElement(session, element_id, &element_wrapper);
			if (status_code == SUCCESS) {
				// The atom is just the definition of an anonymous
				// function: "function() {...}"; Wrap it in another function so we can
				// invoke it with our arguments without polluting the current namespace.
				std::wstring script_source(L"(function() { return (");
				script_source += atoms::GET_SIZE;
				script_source += L")})();";

				CComPtr<IHTMLDocument2> doc;
				browser_wrapper->GetDocument(&doc);

				Json::Value size_array;
				ScriptWrapper script_wrapper(doc, script_source, 1);
				script_wrapper.AddArgument(element_wrapper);
				status_code = script_wrapper.Execute();

				// TODO (JimEvans): Find a way to collapse this and the atom
				// call into a single JS function.
				std::wstring size_script(L"(function() { return function(){ return [arguments[0].width, arguments[0].height];};})();");
				ScriptWrapper size_script_wrapper(doc, size_script, 1);
				size_script_wrapper.AddArgument(script_wrapper.result());
				status_code = size_script_wrapper.Execute();

				size_script_wrapper.ConvertResultToJsonValue(session, &size_array);

				Json::UInt index = 0;
				Json::Value response_value;
				response_value["width"] = size_array[index];
				++index;
				response_value["height"] = size_array[index];
				response->SetResponse(SUCCESS, response_value);
			} else {
				response->SetErrorResponse(status_code, "Element is no longer valid");
				return;
			}
		}
	}
};

} // namespace webdriver

#endif // WEBDRIVER_IE_GETELEMENTSIZECOMMANDHANDLER_H_

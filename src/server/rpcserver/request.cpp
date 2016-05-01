#include "request.hpp"
#include "jsonwriter.hpp"

Request::Request(std::string methodName, Parameters parameters, Value id)
	: myMethodName(std::move(methodName)),
	  myParameters(std::move(parameters)),
	  myId(std::move(id))	{
	// Empty
}

void Request::Write(JsonWriter &writer) const	{
	Write(myMethodName, myParameters, myId, writer);
}

void Request::Write(const std::string& methodName, const Parameters& params,
					const Value& id, JsonWriter& writer)	{
	writer.startDocument();
	writer.startRequest(methodName, id);
	for (auto& param : params) {
		writer.startParameter();
		param.Write(writer);
		writer.endParameter();
	}
	writer.endRequest();
	writer.endDocument();
}

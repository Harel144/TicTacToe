#pragma once
#include <vector>

class IRequestHandler;

struct RequestResult
{
	std::vector<unsigned char> buffer;
	IRequestHandler newHandler;
};

struct RequestInfo
{
	std::vector<unsigned char> buffer;
};

class IRequestHandler
{
	virtual RequestResult handleRequest(RequestInfo info);
};
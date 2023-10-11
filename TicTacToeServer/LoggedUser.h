#pragma once
#include <string>

class LoggedUser
{
public:
	LoggedUser(std::string name) : username(name) {};

	std::string getUsername()
	{
		return this->username;
	}

private:
	std::string username;
};
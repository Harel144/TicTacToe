#pragma once
#include <string>

using std::string;

const char x = 'X';
const char o = 'O';

class Player 
{
public:
	Player(char type, string name);
	char getType();
	string getName();
	void setType(char type);
	void setName(string name);
private:
	char type;
	string name;
};
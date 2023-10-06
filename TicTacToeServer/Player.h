#pragma once
#include <string>

using std::string;

//NOTE: please use those as types/side/etc.
const char x = 'X';
const char o = 'O';

class Player 
{
private:
	char type;
	string name;
public:
	Player(char type, string name);
	char getType();
	string getName();
	void setType(char type);
	void setName(string name);
};
#include <iostream>
#include "Game.h"

int main(void)
{
	std::cout << "enter first player's name: ";
	std::string firstName;
	std::cin >> firstName;

	std::cout << "enter second player's name: ";
	std::string secondName;
	std::cin >> secondName;

	Game newGame(firstName, secondName);
	

	return 0;
}

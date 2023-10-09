#include "Game.h"

int main(void)
{
	std::cout << "enter first player's name: ";
	std::string firstName;
	std::cin >> firstName;

	std::cout << "enter second player's name: ";
	std::string secondName;
	std::cin >> secondName;

	Game* newGame = new Game(firstName, secondName);

	std::cout << "============\n"
		"  WELCOME\n"
		"============\n" << std::endl;

	std::cout << "current board:\n" << std::endl;
	newGame->printBoard();

	while (!newGame->checkWin(x) && !newGame->checkWin(o))
	{
		int loc = 0;
		if (newGame->getTurn())
		{
			std::cout << "send location (0-8) to place an X: ";
			std::cin >> loc;

			bool changed = newGame->playTurn(loc);

			while (!changed)
			{
				std::cout << "Invalid! send location (0-8) to place an X: ";
				std::cin >> loc;

				changed = newGame->playTurn(loc);
			}
		}
		else
		{
			std::cout << "send location (0-8) to place an O: ";
			std::cin >> loc;

			bool changed = newGame->playTurn(loc);

			while (!changed)
			{
				std::cout << "Invalid! send location (0-8) to place an O: ";
				std::cin >> loc;

				changed = newGame->playTurn(loc);
			}
		}

		newGame->printBoard();
	}

	if (newGame->checkWin(x))
	{
		std::cout << "\nCONGRATS X!";
	}
	else
	{
		std::cout << "\nCONGRATS O!";
	}

	return 0;
}

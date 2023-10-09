#pragma once

#include "Game.h"

Game::Game(string xName, string oName)
{
	this->xPlayer = new Player(x, xName);
	this->oPlayer = new Player(o, oName);
	this->gameBoard = new char* [GRIDSIZE];
	for (int i = 0; i < GRIDSIZE; i++)
	{
		this->gameBoard[i] = new char[GRIDSIZE];
		for (int j = 0; j < GRIDSIZE; j++)
		{
			this->gameBoard[i][j] = '\0';
		}
	}
	this->isXTurn = true;

}

char** Game::getBoard()
{
	
	char** b = new char*[GRIDSIZE];

	for (int x = 0; x < GRIDSIZE; x++)
	{
		b[x] = new char[GRIDSIZE];
		for (int y = 0; y < GRIDSIZE; y++)
		{
			b[x][y] = this->gameBoard[x][y];
		}
	}
	return b;
	
}

bool Game::getTurn()
{
	return this->isXTurn;
}

void Game::changeTurn()
{
	this->isXTurn = !this->isXTurn;
}


/*
this fucntion checks if a given side won.
input: a side (must be defined at Player.h or the game will break).
output: true or false.
*/
bool Game::checkWin(char side)
{

	//check rows.
	for (int i = 0; i < GRIDSIZE; i++)
	{
		std::string a;
		for (int j = 0; j < GRIDSIZE; j++)
		{
			a += this->gameBoard[i][j];
		}

		if (a.compare(std::string(GRIDSIZE, side)) == 0)
		{
			return true;
		}
	}

	//checks diagonal lines.
	bool winOnDiagonalFlag = true;

	for (int i = 0; i < GRIDSIZE; i++)
	{
		if (this->gameBoard[i][i] != side)
		{
			winOnDiagonalFlag = false;
			i = GRIDSIZE;
		}
	}

	if (winOnDiagonalFlag)
	{
		return winOnDiagonalFlag;
	}

	for (int i = GRIDSIZE - 1; i >= 0; i--)
	{
		if (this->gameBoard[GRIDSIZE - 1 - i][i] != side)
		{
			winOnDiagonalFlag = false;
			i = -1;
		}
	}

	//in case of Diagonal win, check columns is useless.
	if (!winOnDiagonalFlag)
	{
		//check columns.
		bool winColumnsFlag = true;

		for (int i = 0; i < GRIDSIZE; i++)
		{
			if (this->gameBoard[i][0] != side)
			{
				winColumnsFlag = false;
				i = GRIDSIZE;
			}
		}
		return winColumnsFlag;
	}

	return winOnDiagonalFlag;
}

/*
this function places the sign on the board.
input: location to place the sign at, the sign.
output: true if the sign was placed successfully and false otherwise.
*/
bool Game::placeOnBoard(int location, char sign)
{
	int row = location / GRIDSIZE;
	int col = location % GRIDSIZE;

	if (this->gameBoard[row][col] != '\0')
	{
		this->gameBoard[row][col] = sign;
		return true;
	}
	else
	{
		return false;
	}
}

/*
this function is playing 1 turn of the game. 
input: location to put a sign on (range is 0 to (GRIDSIZE - 1).
output:

NOTE: need to be changed to return void/packet struct in the future to return a packet.
*/
bool Game::playTurn(int location)
{
	//out of range. range is 0 to (GRIDSIZE - 1)
	if ((location >= GRIDSIZE * GRIDSIZE) || (location < 0))
	{
		return false;
	}

	if (this->isXTurn)
	{
		if (this->placeOnBoard(location, x))
		{
			//change with a matching packet in the future.
			return true;
		}
		else
		{
			return false;
		}
	}

	if (this->placeOnBoard(location, o))
	{
		//change with a matching packet in the future.
		return true;
	}
	else
	{
		return false;
	}
}

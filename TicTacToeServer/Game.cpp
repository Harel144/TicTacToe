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
		if (strcmp(this->gameBoard[i], std::string(GRIDSIZE, side).c_str()))
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
			winOnDiagonalFlag == false;
			i = GRIDSIZE;
		}
	}

	for (int i = GRIDSIZE - 1; i >= 0; i--)
	{
		if (this->gameBoard[GRIDSIZE - 1 - i][i] != side)
		{
			winOnDiagonalFlag == false;
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

void playTurn()
{

}

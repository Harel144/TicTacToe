#pragma once

#include "Game.h"

Game::Game(string xName, string oName)
{
	this->xPlayer = new Player(x, xName);
	this->oPlayer = new Player(o, oName);
	this->gameBoard = new char* [COLS];
	for (int i = 0; i < ROWS; i++)
	{
		this->gameBoard[i] = new char[ROWS];
		for (int j = 0; j < COLS; j++)
		{
			this->gameBoard[i][j] = 'b';
		}
	}
	this->isXTurn = true;

}

char** Game::getBoard()
{
	
	char** b = new char*[COLS];

	for (int x = 0; x < ROWS; x++)
	{
		b[x] = new char[ROWS];
		for (int y = 0; y < COLS; y++)
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
bool Game::checkWin()
{

}

void playTurn()
{

}
*/
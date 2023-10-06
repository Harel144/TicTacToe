#pragma once

#include "Game.h"

Game::Game(string xName, string oName)
{
	this->xPlayer = new Player(x, xName);
	this->oPlayer = new Player(o, oName);
	this->gameBoard[0][0] = {};
	this->isXTurn = true;

}

char* Game::getBoard()
{
	return *this->gameBoard;
}

bool Game::getTurn()
{
	return this->isXTurn;
}

void Game::changeTurn()
{
	this->isXTurn = !this->isXTurn;
}

bool checkWin();
void playTurn();

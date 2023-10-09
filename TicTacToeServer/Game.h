#pragma once
#include "Player.h"
#include <cstring>
#include <iostream>

#define GRIDSIZE 3
#define PLACEHOLDER '.'

class Game
{
private:
	//fields
	Player* xPlayer;
	Player* oPlayer;
	bool isXTurn;
	char** gameBoard;

	//methods
	void changeTurn();
	bool placeOnBoard(int location, char sign);
public:
	//constructors
	Game(string xName, string oName);

	//getters
	char** getBoard();
	bool getTurn();

	//methods
	bool checkWin(char side);
	bool playTurn(int location);
	void printBoard();
};
#pragma once
#include "Player.h"

#define GRIDSIZE 3

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

public:
	//constructors
	Game(string xName, string oName);
	
	//getters
	char** getBoard();
	bool getTurn();

	//methods
	bool checkWin(char side);
	void playTurn();
};
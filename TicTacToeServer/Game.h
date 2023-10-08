#pragma once
#include "Player.h"
#include <cstring>

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
};
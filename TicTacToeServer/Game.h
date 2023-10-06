#pragma once
#include "Player.h"

#define ROWS 3
#define COLS 3

class Game
{
private:
	//fields
	Player* xPlayer;
	Player* oPlayer;
	bool isXTurn;
	char gameBoard[ROWS][COLS];
	
	//methods
	void changeTurn();

public:
	//constructors
	Game(string xName, string oName);
	
	//getters
	char* getBoard();
	bool getTurn();

	//methods
	bool checkWin();
	void playTurn();
};
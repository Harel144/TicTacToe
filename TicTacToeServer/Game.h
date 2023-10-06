#pragma once
#include "Player.h"

#define ROWS 3
#define COLS 3

class Game
{
private:
	Player xPlayer;
	Player oPlayer;
	bool isXTurn;
	char gameBoard[ROWS][COLS];
	
	bool changeTurn();

public:
	Game();
	bool checkWin();
	void playTurn();
	char* getBoard();
	bool getTurn();
};
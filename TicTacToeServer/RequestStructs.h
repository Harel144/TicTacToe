#pragma once
#include <string>

struct CreateLobby
{
	std::string lobbyName;
	int gridSize;
};

struct JoinLobby
{
	std::string lobbyName;
};

struct SendTurnData
{
	bool xWon;
	bool oWon;
	char** gameBoard;
	bool isXTurn;
};
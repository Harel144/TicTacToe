#pragma once
#include <string>

typedef struct TurnDataResponse
{
	bool xWon;
	bool oWon;
	char** gameBoard;
	bool isXTurn;
} TurnDataResponse;

typedef struct LobbyCreatedResponse
{
	int succeed;
} LobbyCreatedResponse;

typedef struct CreateAccountResponse
{
	int succeed;
} CreateAccountResponse;

typedef struct GetLobbiesNamesResponse
{
	std::string* lobbiesNames;
} GetLobbiesNamesResponse;


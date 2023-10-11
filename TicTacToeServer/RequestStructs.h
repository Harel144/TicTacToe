#pragma once
#include <string>

typedef struct CreateLobbyRequest
{
	std::string lobbyName;
	int gridSize;
	std::string ownerName;
} CreateLobbyRequest;

typedef struct JoinLobbyRequest
{
	std::string lobbyName;
	std::string playerName;
} JoinLobbyRequest;

typedef struct StartGameRequest
{
	std::string lobbyName;
} StartGameRequest;

typedef struct CreateAccountRequest
{
	std::string name;
} CreateAccountRequest;

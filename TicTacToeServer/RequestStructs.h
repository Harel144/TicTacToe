#pragma once
#include <string>

struct CreateLobby
{
	std::string lobbyName;
	int gridSize;
	std::string ownerName;
};

struct JoinLobby
{
	std::string lobbyName;
	std::string playerName;
};

struct StartGame
{
	std::string lobbyName;
};

struct CreateAccount
{
	std::string name;
};
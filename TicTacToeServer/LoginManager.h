#pragma once
#include "Player.h"
#include <vector>

class LoginManager
{
public:
	bool addPlayer(Player newPlayer);
	void removePlayer(std::string playerName);
	bool isPlayerConnected(std::string playerName);
private:
	std::vector<Player> players;
};
#include "LoginManager.h"

/*
this function checks if a player is connected to
the server. If not, the function adds him.
input: Player.
output: true if player got added and false if not.
*/
bool LoginManager::addPlayer(Player newPlayer)
{
	if (!this->isPlayerConnected(newPlayer.getName()))
	{
		this->players.push_back(newPlayer);
		return true;
	}
	return false;
}

/*
this function checks if a player is connected to
the server and if he is, the function removes him.
input: Player's name.
output: none.
*/
void LoginManager::removePlayer(std::string playerName)
{
	if (isPlayerConnected(playerName))
	{
		for (int i = 0; i < this->players.size(); i++)
		{
			if (this->players[i].getName().compare(playerName) == 0)
			{
				this->players.erase(this->players.begin() + i);
			}
		}
	}
}

/*
this function checks if a player is connected to the server.
input: Player's name.
output: true if player is connected and false if not.
*/
bool LoginManager::isPlayerConnected(std::string playerName)
{
	for (int i = 0; i < this->players.size(); i++)
	{
		if (this->players[i].getName().compare(playerName) == 0)
		{
			return true;
		}
	}

	return false;
}
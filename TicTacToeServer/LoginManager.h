#pragma once
#include "Player.h"
#include <vector>

class LoginManager
{
public:
    // Static method to access the singleton instance
    static LoginManager& getInstance()
    {
        static LoginManager instance; // This ensures a single instance is created
        return instance;
    }

    bool addPlayer(Player newPlayer);
    void removePlayer(std::string playerName);
    bool isPlayerConnected(std::string playerName);

private:
    LoginManager(); // Private constructor to prevent external instantiation
    std::vector<Player> players;
};
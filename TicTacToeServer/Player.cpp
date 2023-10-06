#pragma once
#include "Player.h"

Player::Player(char type, string name) : name(name), type(type)
{
}

char Player::getType()
{
	return this->type;
}

string Player::getName()
{
	return this->name;
}

void Player::setType(char type)
{
	this->type = type;
}

void Player::setName(string name)
{
	this->name = name;
}
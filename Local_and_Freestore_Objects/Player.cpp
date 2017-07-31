#include <iostream>

#include "Player.h"

Player::Player()
	: health(100),
	rage(0),
	experience(0)
{
	std::cout << "Player Object Created!" << std::endl;
}

Player::~Player()
{
	std::cout << "Player Object Destroyed!" << std::endl;
}

void Player::PrintStats()
{
	std::cout << "--- Player Stats ---" << std::endl;
	std::cout << " Health: " << health << std::endl;
	std::cout << " Rage: " << rage << std::endl;
	std::cout << " Experience: " << experience << std::endl;
	std::cout << "---  ---    ---  ---" << std::endl;
	std::cout << std::endl;
}

// Accessor Methods

void Player::SetHealth(int health)
{
	this->health = health;
}

void Player::SetRage(int rage)
{
	this->rage = rage;
}

void Player::GiveExperience(float exp)
{
	this->experience += exp;
}

int Player::Health() const
{
	return health;
}

int Player::Rage() const
{
	return rage;
}

float Player::Experience() const
{
	return experience;
}

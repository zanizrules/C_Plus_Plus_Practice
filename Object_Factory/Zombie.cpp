#include <iostream>

#include "Zombie.h"

Zombie::Zombie() : 
speed(5),
health(100),
dps(3.4f)
{
	std::cout << "Zombie Created..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie Destroyed..." << std::endl;
}

void Zombie::PrintStats()
{
	std::cout << "Zombie Stats:" << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Damage/Second: " << dps << std::endl;
	std::cout << "Speed: " << speed << std::endl;
}

float Zombie::DPS() const
{
	return dps;
}

int Zombie::Health() const
{
	return health;
}

int Zombie::Speed() const
{
	return speed;
}

void Zombie::SetSpeed(int speed)
{
	this->speed = speed;
}

void Zombie::SetHealth(int health)
{
	this->health = health;
}

void Zombie::SetDPS(float dps)
{
	this->dps = dps;
}

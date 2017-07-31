#include <iostream>

#include "HealthPack.h"

HealthPack::HealthPack() :
	health(50),
	weight(4.8f)
{
	std::cout << "Health Pack Created..." << std::endl;
}

HealthPack::~HealthPack()
{
	std::cout << "Ammo Pack Destroyed..." << std::endl;
}

void HealthPack::PrintStats()
{
	std::cout << "Halth Pack Stats:" << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}

int HealthPack::Health() const
{
	return health;
}

float HealthPack::Weight() const
{
	return weight;
}

void HealthPack::SetWeight(float weight)
{
	this->weight = weight;
}

void HealthPack::SetHealth(int health)
{
	this->health = health;
}

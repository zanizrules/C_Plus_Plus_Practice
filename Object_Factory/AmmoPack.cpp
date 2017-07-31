#include <iostream>

#include "AmmoPack.h"

AmmoPack::AmmoPack() :
	ammo(10),
	weight(9.8f)
{
	std::cout << "Ammo Pack Created..." << std::endl;
}

AmmoPack::~AmmoPack()
{
	std::cout << "Ammo Pack Destroyed..." << std::endl;
}

void AmmoPack::PrintStats()
{
	std::cout << "Ammo Pack Stats:" << std::endl;
	std::cout << "Ammo: " << ammo << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}

int AmmoPack::Ammo() const
{
	return ammo;
}

float AmmoPack::Weight() const
{
	return weight;
}

void AmmoPack::SetWeight(float weight)
{
	this->weight = weight;
}

void AmmoPack::SetAmmo(int ammo)
{
	this->ammo = ammo;
}

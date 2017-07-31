#include <iostream>

#include "Player.h"


int main()
{
	Player* pPlayer = nullptr;

	// allocate a Player object on the Freestore with new, then Store the resulting allocation’s address in pPlayer
	pPlayer = new Player();

	std::cout << std::endl;
	pPlayer->PrintStats();

	// Test Setters
	pPlayer->SetHealth(50);
	pPlayer->SetRage(10);
	pPlayer->GiveExperience(84.7f);

	// Test Getters
	std::cout << "Health is Now: " << pPlayer->Health() << std::endl;
	std::cout << "Rage is Now: " << pPlayer->Rage() << std::endl;
	std::cout << "Experience is Now: " << pPlayer->Experience() << std::endl << std::endl;

	pPlayer->PrintStats();

	// Deallocate the Player object from the Freestore
	delete pPlayer;
}
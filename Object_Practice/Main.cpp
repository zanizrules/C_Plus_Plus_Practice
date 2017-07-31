#include <iostream>

#include "Player.h"


int main()
{
	Player testPlayer = Player();
	std::cout << std::endl;
	testPlayer.PrintStats();
	
	// Test Setters
	testPlayer.SetHealth(50);
	testPlayer.SetRage(10);
	testPlayer.GiveExperience(84.7f);

	// Test Getters
	std::cout << "Health is Now: " << testPlayer.Health() << std::endl;
	std::cout << "Rage is Now: " << testPlayer.Rage() << std::endl;
	std::cout << "Experience is Now: " << testPlayer.Experience() << std::endl << std::endl;

	testPlayer.PrintStats();
}
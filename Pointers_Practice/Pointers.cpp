#include <iostream>
#include <ctime>

struct NPC
{
	int strength;
	int health;
	int tiredness;
	int xPos;
	int yPos;
	bool alive;
};

NPC* CreateNPC();
void PrintNPCDetails();

NPC* CreateNPC()
{
	NPC* newNPC = new NPC();

	newNPC->strength = (rand() % 19) + 4;
	newNPC->health = (rand() % 199) + 51;
	newNPC->tiredness = (rand() % 14) + 1;
	newNPC->xPos = (rand() % 99) + 1;
	newNPC->yPos = (rand() % 99) + 1;
	newNPC->alive = true;
	return newNPC;
}

void PrintNPCDetails(NPC* npc)
{
	std::cout << "NPC's Current State:" << std::endl;
	std::cout << " - Posistion: (" << npc->xPos << ", " << npc->yPos << ")" << std::endl;
	std::cout << " - Health: " << npc->health << std::endl;
	std::cout << " - Strength: " << npc->strength << std::endl;
	std::cout << " - Tiredness: " << npc->tiredness << std::endl;
	std::cout << " - Alive: ";
	if (npc->alive)
	{
		std::cout << "True";
	}
	else std::cout << "False";

	std::cout << std::endl;
}

int main()
{
	srand(time(0));
	NPC* npcArray[10];
	for (int i = 0; i < 10; i++)
	{
		npcArray[i] = CreateNPC();
		PrintNPCDetails(npcArray[i]);
	}
	
	// Free up whats stored on the freestore to prevent memory leaks
	for (int i = 0; i < 10; i++)
	{
		delete npcArray[i];
	}

	return 0;
}
/* Insert function definitions here */
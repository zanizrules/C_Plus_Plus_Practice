#include <iostream>

struct Player
{
	int xPos;
	int yPos;
	int health;
	bool alive;

	Player(int x, int y, int h)
	{
		xPos = x;
		yPos = y;
		health = h;
		alive = h > 0;
	}
	Player() {}
};

void setUpPlayer(Player& player);
void PrintPlayerDetails(const Player& player);

void setUpPlayer(Player& player)
{
	player = Player(0, 0, 100);
}

void PrintPlayerDetails(const Player& player)
{
	std::cout << "Player's Current State:" << std::endl;
	std::cout << " - Posistion: (" << player.xPos << ", " << player.yPos << ")" << std::endl;
	std::cout << " - Health: " << player.health << std::endl;
	std::cout << " - Alive: ";
	if (player.alive)
	{
		std::cout << "True";
	} 
	else std::cout << "False";

	std::cout << std::endl;
}

int main()
{
	Player player1;
	Player player2;

	std::cout << "Player 1: " << std::endl;
	PrintPlayerDetails(player1);
	PrintPlayerDetails(player2);

	setUpPlayer(player1);
	setUpPlayer(player2);

	std::cout << "Player 2: " << std::endl;
	PrintPlayerDetails(player1);
	PrintPlayerDetails(player2);


	return 0;
}
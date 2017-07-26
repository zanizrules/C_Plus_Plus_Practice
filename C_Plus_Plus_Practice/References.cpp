#include <iostream>
#include <string>
#include <ctime>

void RollTwoDice(int& diceOne, int& diceTwo);

int main()
{
	srand(time(0));

	int dice1 = 0;
	int dice2 = 0;
	std::cout << "Dice 1: " << dice1 << ", Dice 2: " << dice2 << std::endl;
	
	RollTwoDice(dice1, dice2);

	std::cout << "Dice 1: " << dice1 << ", Dice 2: " << dice2 << std::endl;

	return 0;
}

void RollTwoDice(int& diceOne, int& diceTwo)
{
	diceOne = (rand() % 6) + 1;
	diceTwo = (rand() % 6) + 1;
}
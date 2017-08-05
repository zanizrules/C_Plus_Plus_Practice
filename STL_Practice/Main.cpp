/*

Then write code to do the same operations with the std::stack, and std::queue. 
Experiment with each type of container.

*/

#include <vector>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>

#include <iostream>
#include <string>

void PrintContent(std::vector<int> vec)
{
	std::cout << "Vector Content: [";
	std::vector<int>::iterator iter = vec.begin();
	while (iter != vec.end())
	{
		std::cout << *iter << ", ";
		++iter;
	}
	std::cout << "]" << std::endl;
}

int main()
{
	std::vector<int> intVector;

	intVector.push_back(12);
	intVector.push_back(4);
	intVector.push_back(9);
	intVector.push_back(2);
	intVector.emplace_back(8);


	std::cout << "Original -" << std::endl;
	PrintContent(intVector);

	std::cout << "Sorted -" << std::endl;
	std::sort(intVector.begin(), intVector.end());
	PrintContent(intVector);

	std::cout << "Random Shuffle -" << std::endl;
	std::random_shuffle(intVector.begin(), intVector.end());
	PrintContent(intVector);

	std::queue<int> intQueue;
	intQueue.push(10);
	intQueue.push(20);
	intQueue.push(30);
}
#include <iostream>

/*
	NOTE: 
	This code is written in C++ and is not an example in which follows the Code Laws for this course.
	The purpose of this code was only to demonstrate how I would implement merge sort, and to demonstrate
	my thought process.
*/

void printArray(int array[], int start, int end);
void mergeSort(int arrayToSort[], int start, int end);
void merge(int arrayToSort[], int leftStart, int rightStart, int leftEnd, int rightEnd);

int main()
{
	int array[15] = { 3, 2, 7, 5, 1, 4 , 100, 200, 28, 55, 12, 7, -1, 50, 21};

	std::cout << "Original : ";
	printArray(array, 0, 14);

	mergeSort(array, 0, 14);

	std::cout << "After Merge Sort : ";
	printArray(array, 0, 14);

}

void printArray(int array[], int start, int end)
{
	std::cout << "[";
	for (int i = start; i < end; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "]" << std::endl;
}

void mergeSort(int arrayToSort[], int start, int end)
{
	int midPoint = 0;

	if (start < end)
	{
		// Break the array down into units of 1

		midPoint = (start + end)/2; // Get mid point
		mergeSort(arrayToSort, start, midPoint); // Recurse (repeat process) to the left of the mid point
		mergeSort(arrayToSort, midPoint+1, end); // Recurse (repeat process) to the left of the mid point

		// Now that we have reached a point where we have n arrays of size n we should start merging
		// Remember while merging that we will be sorting the elements

		merge(arrayToSort, start, midPoint + 1, midPoint, end);
	}
}

void merge(int arrayToSort[], int leftStart, int rightStart, int leftEnd, int rightEnd)
{
	// Now that we are here... we need to start merging!

	// Lets store the current index's we will be looking at
	int leftIndexPosistion = leftStart;
	int rightIndexPosistion = rightStart;
	int mergedIndexPosistion = 0;

	// Lets make a fresh new array to store the sorted data
	int sortedArray[100];

	while (leftIndexPosistion <= leftEnd && rightIndexPosistion <= rightEnd)
	{
		if (arrayToSort[leftIndexPosistion] < arrayToSort[rightIndexPosistion])
		{
			sortedArray[mergedIndexPosistion] = arrayToSort[leftIndexPosistion]; // Assign left side as its smaller
			leftIndexPosistion++; // Move along so we can compare the next element 
		}
		else
		{
			sortedArray[mergedIndexPosistion] = arrayToSort[rightIndexPosistion]; // Assign right side as its smaller
			rightIndexPosistion++; // Move along so we can compare the next element 
		}
		mergedIndexPosistion++; // Add to the next free space on next iteration
	} // While loop exits after two sub arrays are sorted into sortedArray

	// But hold on? What if we have one side with remaining elements?
	for (leftIndexPosistion; leftIndexPosistion <= leftEnd; leftIndexPosistion++, mergedIndexPosistion++)
	{
		sortedArray[mergedIndexPosistion] = arrayToSort[leftIndexPosistion];
	}
	for (rightIndexPosistion; rightIndexPosistion <= rightEnd; rightIndexPosistion++, mergedIndexPosistion++)
	{
		sortedArray[mergedIndexPosistion] = arrayToSort[rightIndexPosistion];
	}

	// Now to copy
	// Question: Why is i not initialised to 0, but j is??
	for (int i = leftStart, j = 0; i < rightEnd + 1; i++, j++) 
	{
		arrayToSort[i] = sortedArray[j]; 
	}
}
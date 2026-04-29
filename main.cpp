#include "main.hpp"

int main()
{
	int N = 10;
	vector<int> number;

	// Test the bubble() function with simple exampel values
	number = {8, 4, 2, 1, 10};
	cout << "******************** Test 1 ********************\n";
	cout << "Original Vector values\n";
	printVector(number);
	bubble(number);
	cout << "After call bubble() one time \n";
	printVector(number);

	// Test the bubble()  and bubblesort() function with random values
	cout << "******************** Test 2 ********************\n";
	makeVector(number, N);
	cout << "Original Vector values\n";
	printVector(number);
	bubble(number);
	cout << "After call bubble() one time \n";
	printVector(number);
	bubblesort(number);
	cout << "After call bubble() N-1 times \n";
	printVector(number);
}
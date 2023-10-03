#include <iostream>
using namespace std;

int main()
{
	int numbers[10];

	cout << "Input 10 numbers" << endl;

	//Loop for the inputs
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}

	//Bubble sort
	//first loop controls the number of passes through the list
	for (int i = 0; i < 9; i++) {
		//second loop for comparing and potentially swapping elements
		for (int j = 0; j < 9 - i; j++) {
				//Check if the current element is larger than the next one
			if (numbers[j] > numbers[j + 1]) {
				//Swap the elements
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;       
			}
		}
	}

	cout << "Sorted numbers:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;


	return 0;
}
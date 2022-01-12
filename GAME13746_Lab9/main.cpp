#include <iostream>
using namespace std;

void sort(int*, int);
int avg(int*, int);

int main()
{
	const int Tests = 5; // max number of tests
	int* TestScores = nullptr; // address of Test scores array

	//Allocate the array
	TestScores = new int[Tests];

	//Read test scores With validation for negative numbers
	cout << "Enter Test Scores: ";
	for (int i = 0; i < Tests; i++)
	{
		cin >> TestScores[i];

		while (TestScores[i] < 0)
		{
			cout << "Error: No Negative Numbers, Try again: ";
			cin >> TestScores[i];

			if (TestScores[i] > 0)
			{
				break;
			}
		}
	}

	//Display the Array

	for (int i = 0; i < Tests; i++)
	{
		cout << TestScores[i] << " ";
	}

	cout << "\n";

	cout << "The contents of the Array Sorted" << endl;
	sort(TestScores, Tests);

	for (int i = 0; i < Tests; i++)
	{
		cout << TestScores[i] << " ";
	}

	cout << "\n";


	cout << "The average of the Test Scores is " << avg(TestScores, Tests) << endl;

	return 0;
}

void sort(int* array, int size)
{
	int temp;
	bool swap;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

int avg(int* array, int size)
{
	int sum = 0;
	int avg = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}

	avg = sum / size;

	return avg;
}
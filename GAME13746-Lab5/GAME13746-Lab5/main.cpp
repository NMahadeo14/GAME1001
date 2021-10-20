#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int theArray[10]; // the array that will be holding the intergers

	cout << "Please populate the Array with intergers." << endl;

	for (int i = 0; i < 10; i++) // for loop to let us populate each element of the array
	{
		cout << "---> ";
		cin >> theArray[i];
	}

	int sum = 0;
	int avg = 0;
	

	for (int i = 0; i < 10; i++) // for loop to add the elements of the array to get the sum
	{
		sum = sum + theArray[i];
	}

	avg = sum / 10; // calculates the average after the sum is gotten 

	cout << "The Sum of the array is: " << sum << endl;
	cout << "The Average of the array is: " << avg << endl;
	
	vector<int> greater; // Vector declaration
	vector<int> lesser; // Vector declaration

	for (int i = 0; i < 10; i++)
	{
		if (theArray[i] <= avg)
		{
			lesser.push_back(theArray[i]); // taking values less or = to avg and adding them to lesser vector
		}
		else if (theArray[i] > avg)
		{
			greater.push_back(theArray[i]); //  taking values greater than avg and adding them to greater vector
		}
	}

	cout << "The contents of the Array: ";
	for (int i = 0; i < 10; i++) // for loop that lets us display each of the elements in the array
	{
		cout << theArray[i] << ", ";
	}
	cout << endl; // formatting newlines
	cout << "The contents of the Greater Vector: ";
	for (int& i : greater) // for loop that lets us display each of the elements in the Greater vector
	{
		cout << i << ", ";
	}
	cout << endl; // formatting newlines 
	cout << "The contents of the Lesser Vector: ";
	for (int& i : lesser) // for loop that lets us display each of the elements in the Lesser vector
	{
		cout << i << ", ";
	}

	return 0;
}
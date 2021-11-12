#include <iostream>
#include <stdlib.h>;
using namespace std;

//Function Prototypes 
void DisplayAsterisk(int astnum);

int main()
{
	int Asterisk_array[5]; // Array that will be Populated by the user at runtime
	int j = 0; // counter varaible to track the index of the array

	cout << "Please Enter 5 numbers One at a Time: ";
	for (int counter = 0; counter < 5; counter++) // for loop to help populate the array
	{
		
		cin >> Asterisk_array[j]; // enter the interger at the current index

		while (Asterisk_array[j] > 30 || Asterisk_array[j] <= 0) //  enters the while loop if the entered interger isnt within the bounds
		{
			if (Asterisk_array[j] > 30 || Asterisk_array[j] <= 0) // if statement to handle the invalid variable
			{
				cout << "Error Numbers not within a Valid range try again!!: ";
				cin >> Asterisk_array[j]; // enter new variable at the same index
			}
			else
			{
				break; // breaks out of the while once the interger at the index is valid
			}
			
		}

		j++; // go up one to the next index of the array
	}

	system("CLS"); // clears the screen after the numbers are inputed, strictly for a nice output

	for (size_t i = 0; i < 5; i++) // for loop to call the display function
	{
		DisplayAsterisk(Asterisk_array[i]); // calls the display function with the variable at the index of i value
	}

	return 0;
}

void DisplayAsterisk(int astnum) // Display funtion that takes in an interger 
{
	
	for (int i = 0; i < astnum; i++) // for loop that run as many times as the interger passed to the function
	{
		cout << "*";
	}

	cout << '\n'; // formatting return
}
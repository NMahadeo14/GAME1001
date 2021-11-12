#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Welcome to your weekly earning calculator!" << endl;
	cout << "==========================================\n" << endl;

	cout << "You make $200 each week plus commisson of 9% on items sold." << endl;
	cout << "==========================================================\n" << endl;

	cout << "==========================================================" <<endl;
	cout << "1. Item 1 ($299.99)" << endl; double Item1 = 299.99;
	cout << "2. Item 2 ($89.75)" << endl; double Item2 = 89.75;
	cout << "3. Item 3 ($189.95)" << endl; double Item3 = 189.95;      // Formatting for the Code + the declaration and initialization of each item and their price
	cout << "4. Item 4 ($150.89)" << endl; double Item4 = 150.89;
	cout << "5. Item 5 ($429.45)" << endl; double Item5 = 429.45;
	cout << "==========================================================" << endl;

	int quantityItem1; // The variable that will hold the amount sold of item 1
	cout << "How many units of Item 1 ($299.99) did you sell? ";
	cin >> quantityItem1;

	while (quantityItem1 < 0) // While loop ensures that a negative number cannot be inputed. , This while loops is repeated throughtout the quantity population process
	{
		cout << "Sorry, only 0 or above is accepted, try again: ";    
		cin >> quantityItem1;
	}

	int quantityItem2; // The variable that will hold the amount sold of item 2
	cout << "How many units of Item 2 ($89.75) did you sell? ";
	cin >> quantityItem2;

	while (quantityItem2 < 0)
	{
		cout << "Sorry, only 0 or above is accepted, try againL: ";
		cin >> quantityItem2;
	}

	int quantityItem3; // The variable that will hold the amount sold of item 3
	cout << "How many units of Item 3 ($189.95) did you sell? ";
	cin >> quantityItem3;

	while (quantityItem3 < 0)
	{
		cout << "Sorry, only 0 or above is accepted, try again: ";
		cin >> quantityItem3;
	}
	
	int quantityItem4; // The variable that will hold the amount sold of item 4
	cout << "How many units of Item 4 ($150.89) did you sell? ";
	cin >> quantityItem4;

	while (quantityItem4 < 0)
	{
		cout << "Sorry, only 0 or above is accepted, try again: ";
		cin >> quantityItem4;
	}

	int quantityItem5; // The variable that will hold the amount sold of item 5
	cout << "How many units of Item 5 ($429.45) did you sell? ";
	cin >> quantityItem5;

	while (quantityItem5 < 0)
	{
		cout << "Sorry, only 0 or above is accepted, try again: ";
		cin >> quantityItem5;
	}

	double totalCostItem1;
	double totalCostItem2;
	double totalCostItem3; // Variable to told the total cost of each item
	double totalCostItem4;
	double totalCostItem5;

	double totalCostAll = 0; // Cost of all items;

	if (quantityItem1 > 0) // if the quantity is not 0 the calculation of cost for the # item will take place, this is repeated for each # item
	{
		totalCostItem1 = Item1 * quantityItem1;
		totalCostAll = totalCostAll + totalCostItem1; // adds all the costs to get the Total cost of all items altogether, this calculation will not take place if the quantity is 0 for a certain item
	}

	if (quantityItem2 > 0)
	{
		totalCostItem2 = Item2 * quantityItem2;
		totalCostAll = totalCostAll + totalCostItem2;
	}

	if (quantityItem3 > 0)
	{
		totalCostItem3 = Item3 * quantityItem3;
		totalCostAll = totalCostAll + totalCostItem3;
	}

	if (quantityItem4 > 0)
	{
		totalCostItem4 = Item4 * quantityItem4;
		totalCostAll = totalCostAll + totalCostItem4;
	}

	if (quantityItem5 > 0)
	{
		totalCostItem5 = Item5 * quantityItem5;
		totalCostAll = totalCostAll + totalCostItem5;
	}

	totalCostAll = totalCostAll * 0.09; // 9% of commission on all the sales 
	totalCostAll = totalCostAll + 200; // The $200 that is made each week is added

	cout << "==========================================================" << endl;
	cout << "Your Total Pay for the Week is: " << fixed << setprecision(2) <<totalCostAll << endl; // stream manipulators used to show an output to 2 decimal places
	cout << "==========================================================" << endl;

	return 0;
}
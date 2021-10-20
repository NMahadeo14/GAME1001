#include <iostream>
using namespace std;

int main()
{
	double number1;
	double number2;
	double number3;

	float sum;
	float product;
	float avg;

	cout << "Please enter 3 decimal numbers: ";
	cin >> number1 >> number2 >> number3;

	cout << "Number 1: " << number1 << endl;
	cout << "Number 2: " << number2 << endl;
	cout << "Number 3: " << number3 << endl;

	sum = number1 + number2 + number3;
	product = number1 * number2 * number3;

	avg = sum / 3;

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "Average: " << avg << endl;


	return 0;
}
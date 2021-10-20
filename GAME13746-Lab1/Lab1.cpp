/*
* 
* Data Types in order of smallest to Largest
* -Bool
* -Char
* -Short int
* -int
* -long int
* -float
* -long long int
* -double
* -string
* 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	// Code proof of the Data types in order of smallest to largest
	cout << "bool " << sizeof(bool) << endl;
	cout << "char " << sizeof(char) << endl;
	cout << "short int " << sizeof(short int) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "long int " << sizeof(long int) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "long long int " << sizeof(long long int) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "string " << sizeof(string) << endl;
	
	// arithmetic examples of the data types being used
	int x = 6;
	int y = 5;
	double h = 3.5;
	double k = 6.8;
	int a = 11;
	int b = 3;

	cout << "6 + 5 = " << x + y << endl;
	cout << "3.5 - 6.8 = " << h - k << endl;
	cout << "6 * 5 = " << x * y << endl;
	cout << "3.5 / 6.8 = " << h / k << endl;
	cout << "11 % 3 = " << a % b << endl;

	return 0;
}
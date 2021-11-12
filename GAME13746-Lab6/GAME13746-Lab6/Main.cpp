#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
float celsius(float);

int main()
{

	cout << "The Following is the Tempertures from Coldest to Warmest in Toronto Converted from Fahrenheit to Celsuis:" << endl;

	for (int i = -20.0; i <= 100 ; i++)
	{
		celsius(i); // calls the funtion with i being the current temp to be converted

		//formatting for the output
		cout << setw(10) << "=====================" << endl; 
		cout << right;
		cout << "|" << setw(3) << i << " Fahrenheit.    |" << endl;
		cout << "|" << setw(5) << fixed << setprecision(1) << celsius(i) << " celsius.     |" << endl;
		cout << setw(10) << "=====================" << endl;
	}

	return 0;
}

//Fahrenheit to Celsuis conversion Function
float celsius(float fahrenheit)
{
	return 5.0 / 9.0 * (fahrenheit - 32.0);
}
// This program demonstrates the use of a structure.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee
{
private:
	int    empNumber;  // Employee number
	string name;       // Employee name
	double hours,      // Hours worked
		payRate;    // Hourly pay rate
public:
	Employee(int empN, string n, double h, double p)
	{
		empNumber = empN;
		name = n;
		hours = h;
		payRate = p;
	}

	Employee()
	{
		empNumber = 0;
		name = "No Name";
		hours = 0;
		payRate = 0;
	}
	void setEmpNumber(int number)
	{
		empNumber = number;
	}

	void setName(string n)
	{
		name = n;
	}

	void setPayRate(double rate)
	{
		payRate = rate;
	}

	void setHours(double h)
	{
		hours = h;
	}

	int getEmpNumber()
	{
		return empNumber;
	}

	string getName()
	{
		return name;
	}

	double getHours()
	{
		return hours;
	}

	double getPayRate()
	{
		return payRate;
	}

	double getWage()
	{
		return payRate * hours;
	}

	string getEmpData()
	{
		string data = "\nEmployee ID Number ===> " + to_string(empNumber);
		data += "\nEmployee Name ========> " + name;
		data += "\nHours Worked =========> " + to_string(hours);
		data += "\nPay Rate =============> " + to_string(payRate);
		data += "\nTotal Wage ===========> " + to_string(getWage());
		data += "\n";

		return data;
	}



};


Employee findHigh(Employee list[], int size);
Employee findLow(Employee list[], int size);
void sortEmployeesAZ(Employee list[], int size);

//Functions for Test 4
double avgEarnings(Employee list[], int size);
void sortEmployeesPayHighLow(Employee list[], int size);
int higherThanAvg(Employee list[], int size);

int main()
{
	const int NUM_EMPLOYEES = 4;

	Employee list[NUM_EMPLOYEES];
	list[0] = Employee(1, "John", 40, 25);
	list[1] = Employee(2, "Mary", 30, 40);
	list[2] = Employee(3, "Grace", 35, 30);
	list[3] = Employee(4, "Mark", 45, 20);

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	cout << "\n";
	cout << "Employee with the highest wage is: " << findHigh(list, NUM_EMPLOYEES).getEmpData();
	cout << "\n";
	cout << "Employee with the lowest wage is: " << findLow(list, NUM_EMPLOYEES).getEmpData();
	cout << "\n";
	cout << "Average Earnings of all Employees is: " << to_string(avgEarnings(list, NUM_EMPLOYEES)); // Average Earnings from Test function
	cout << "\n";
	cout << "Number of Employees with Earnings higher than Average is: " << higherThanAvg(list, NUM_EMPLOYEES); // Number of employees making higher than average
	cout << "\n";

	cout << "\n";
	cout << "Employees Sorted from Wage lowest to highest: " << endl;
	sortEmployeesAZ(list, NUM_EMPLOYEES);
	
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	cout << "\n";
	cout << "Employees Sorted from Rate of Pay highest to lowest: " << endl;

	sortEmployeesPayHighLow(list, NUM_EMPLOYEES); // Sort Employees by rate of pay from highest to lowest;

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	system("pause");
	return 0;
}

Employee findHigh(Employee list[], int size)
{

	Employee high = list[0];
	for (int i = 0; i < size; i++)
		if (list[i].getWage() > high.getWage())
		{
			high = list[i];
		}
	return high;
}

Employee findLow(Employee list[], int size)
{

	Employee low = list[0];
	for (int i = 0; i < size; i++)
		if (list[i].getWage() < low.getWage())
		{
			low = list[i];
		}
	return low;
}

void sortEmployeesAZ(Employee list[], int size)
{
	Employee emp;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (list[i].getWage() > list[j].getWage())
			{
				emp = list[i];
				list[i] = list[j];
				list[j] = emp;
			}
}

double avgEarnings(Employee list[], int size)
{
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + list[i].getWage();
	}

	avg = sum / size;

	return avg;
}

void sortEmployeesPayHighLow(Employee list[], int size)
{
	Employee emp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (list[j].getPayRate() > list[i].getPayRate())
			{
				emp = list[j];
				list[j] = list[i];
				list[i] = emp;
			}
		}
	}
}

int higherThanAvg(Employee list[], int size)
{
	double sum = 0;
	double avg = 0;
	int empNum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + list[i].getWage();
	}

	avg = sum / size;

	for (int i = 0; i < size; i++)
	{
		if (list[i].getWage() > avg)
		{
			empNum++;
		}
	}

	return empNum;
}

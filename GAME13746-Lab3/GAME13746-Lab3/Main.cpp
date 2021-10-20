#include <iostream>
using namespace std;

int main()
{
	int hoursWorked;
	double hourlyRate;
	int overtimeWorked;
	double totalPay;
	double overtimePay;
	double regularPay;

	cout << "Please Enter the amount of hours worked: ";
	cin >> hoursWorked;

	cout << "Please Enter the hourly rate: ";
	cin >> hourlyRate;

	if (hoursWorked <= 40)
	{
		regularPay = hourlyRate * hoursWorked; // pay formula
		totalPay = regularPay;
		overtimePay = 0;

		cout << "Regular Pay: " << regularPay << endl;
		cout << "Overtime Pay: " << overtimePay << endl;
		cout << "total Pay: " << totalPay << endl;
	}

	if (hoursWorked > 40)
	{
		overtimeWorked = hoursWorked - 40; // if more then 40 hours are worked i subtracted 40hrs to isolate the overtime worked
		hoursWorked = hoursWorked - overtimeWorked; // total hours worked minus the overtime hrs worked will give the correct regular hours worked

		overtimePay = overtimeWorked * (hourlyRate * 1.5); // overtime multipled by the pay that has 1.5 applied to it
		regularPay = hoursWorked * hourlyRate; // regular pay formula

		totalPay = overtimePay + regularPay;

		cout << "Regular Pay: " << regularPay << endl;
		cout << "Overtime Pay: " << overtimePay << endl;
		cout << "total Pay: " << totalPay << endl;
	}

	return 0;
}
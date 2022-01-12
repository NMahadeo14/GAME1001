#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int getDays(int, int);

int main()
{
    bool done = false;
    int month, year, days = 0;
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    string months[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };

    cout << "Enter month and year(0 0 to terminate): ";
    cin >> month;
    cin >> year;

    while (!done)
    {
        if (month == 0 && year == 0)
        {
            done = true;
            year = timeinfo->tm_year + 1900;
            days = getDays(timeinfo->tm_mon + 1, year);
            cout << "The current month, " << months[timeinfo->tm_mon] << " " << year << " has ";
        }
        else if (month < 1 || month>12)
            cout << "InValid date\n";
        else
            days = getDays(month, year);
        cout << days << " days\n";
        if (!done)
        {
            cout << "Enter month and year(0 0 to terminate): ";
            cin >> month;
            cin >> year;
        }
    }
    system("pause");
    return 0;

}

int getDays(int month, int year)
{
    int days;
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 2:
        days = 28;
        if (year % 4 == 0)
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    days++;
            }
            else
                days++;
        break;
    default: days = 30;
    }
    return days;
}

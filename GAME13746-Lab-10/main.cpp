#include <iostream>
#include <string>

using namespace std;

bool CheckPassword(string pswrd);

bool Valid = false;
int UpperCaseLetters = 0;
int LowerCaseLetters = 0;
int DigitNumber = 0;

int main() {

	string password;

	do
	{
		cout << "Enter Password: ";
		cin >> password;

		for (int i = 0; i < password.length(); i++) {

			char ch = password.at(i);

			if (ch >= 'a' && ch <= 'z')
			{
				LowerCaseLetters++;
			}

			if (ch >= 'A' && ch <= 'Z')
			{
				UpperCaseLetters++;
			}

			if (isdigit(ch))
			{
				DigitNumber++;
			}
		}

		if (CheckPassword(password))
		{
			cout << "\nValid password";
		}

		LowerCaseLetters = 0;
		UpperCaseLetters = 0;
		DigitNumber = 0;

	} while (Valid == false);
	
	return 0;

}

bool CheckPassword(string pswrd)
{
	string password = pswrd;

	if (password.length() >= 6 && password.length() <= 20) 
	{


		if (UpperCaseLetters <= 0)
		{
			cout << "Invalid : Should have at least one uppercase character" << endl;
			Valid = false;
		}

		if (LowerCaseLetters <= 0)
		{
			cout << "Invalid : Should have at least one lowercase character" << endl;

			Valid = false;
		}

		if (DigitNumber <= 0)
		{
			cout << "Invalid : Should have at least one digit" << endl;

			Valid = false;
		}

	}
	else if (password.length() < 6 || password.length() > 20)
	{

		cout << "Invalid Password : Should be between 6 and 20 characters" << endl;

		Valid = false;

	}

	if (password.length() >= 6 && password.length() <= 20 && UpperCaseLetters != 0 && LowerCaseLetters != 0 && DigitNumber != 0)
	{
		Valid = true;
	}

	

	return Valid;
}
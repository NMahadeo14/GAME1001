#include <iostream>
#include <string>	
using namespace std;

string ToUpper(string word)
{
	for (int i = 0; i < word.size(); i++) //  change string to all uppercase
	{
		word.at(i) = toupper(word.at(i));
	}

	return word;
}

string ToLower(string word) // change string to all lowercase
{
	for (int i = 0; i < word.size(); i++)
	{
		word.at(i) = tolower(word.at(i));
	}

	return word;
}


int NumOfVowels(string word) // Vowel counter function
{
	int counter = 0;

	for (int i = 0; i < word.size(); i++)
	{
		if (word.at(i) == 'A' || word.at(i) == 'E' || word.at(i) == 'I' || word.at(i) == 'O' || word.at(i) == 'U' || word.at(i) == 'a' || word.at(i) == 'e' || word.at(i) == 'i' || word.at(i) == 'o' || word.at(i) == 'u')
		{
			counter++;
		}
		
	}

	return counter;
}

int NumofConsonants(string word) // Consonant counter function
{
	int counter = 0;

	for (int i = 0; i < word.size(); i++)
	{
		if (word.at(i) != 'A' || word.at(i) != 'E' || word.at(i) != 'I' || word.at(i) != 'O' || word.at(i) != 'U' || word.at(i) != 'a' || word.at(i) != 'e' || word.at(i) != 'i' || word.at(i) != 'o' || word.at(i) != 'u')
		{
			counter++;
		}
		
	}
	

	return counter;
}

int main()
{

	cout << "Please enter a string to process: ";
	string word;
	cin >> word;

	cout << "String " << word << " converted to all uppercase: " << ToUpper(word) << endl; // Test for the convert to uppercase function
	cout << "String " << word << " coverted to all lowercase: " << ToLower(word) << endl; // Test for the convert to lowercase function
	cout << "Vowels contained in the string above: " << NumOfVowels(word) << endl; // Test for the number of Vowels function
	cout << "Consonants contained in the string above: " << NumofConsonants(word) << endl; // Test for the number of consonants funtion

	cout << "\n";

	
	return 0;
}
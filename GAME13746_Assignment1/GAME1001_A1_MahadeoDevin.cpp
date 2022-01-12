#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	srand(time(NULL));

	// Any Variable Definitions ive made or used
	int computer = rand() % 5 + 1;
	int Player1 = 0;
	string IGN;
	int Player_Score = 0;
	int Computer_Score = 0;
	bool Rematch = true;
	string fileline;

	//User Input for name
	cout << "Please Enter your IGN: ";
	cin >> IGN;

	while (IGN.length() < 8)
	{
		cout << "IGN too Short please enter another one: ";
		cin >> IGN;
	}

	//File for writing the scores
	fstream file;
	file.open(IGN + ".txt", fstream::out); // sets file to input mode so that if the file already exists the file will be read

	// This prints the contents of the file to the screen for the continued game functionality
	//if (!file.is_open())
	//{
	//	file.open(IGN + ".txt", fstream::in); // sets file to input mode so that if the file already exists the file will be read

	//	while (!file.eof())
	//	{
	//		getline(file, fileline);

	//		cout << fileline << endl;
	//	}
	//}

	//User Input options

	string rock = "Rock";
	string paper = "Paper";
	string scissors = "Scissors";
	string lizard = "Lizard";
	string spock = "Spock";

	//User Interface
	
	while (Rematch)
	{
		cout << "\n";
		cout << "================================" << endl;
		cout << "Rock Paper Scissors Lizard Spock" << endl;
		cout << "================================" << endl;

		cout << "Please Choose One of the Following options: " << endl;

		cout << "1." << rock << endl;
		cout << "2." << paper << endl;
		cout << "3." << scissors << endl;
		cout << "4." << lizard << endl;
		cout << "5." << spock << endl;

		cout << "Choose ----> ";
		cin >> Player1;

		while (Player1 <= 0 || Player1 > 5)
		{
			cout << "Error Invalid input, Enter again: ";
			cin >> Player1;
		}

		cout << "\n\n";

		cout << "Your Choice is -----> ";

		//Displaying the Players Choice

		switch (Player1)
		{
		case 1:
			cout << rock << endl;
			break;
		case 2:
			cout << paper << endl;
			break;
		case 3:
			cout << scissors << endl;
			break;
		case 4:
			cout << lizard << endl;
			break;
		case 5:
			cout << spock << endl;
			break;
		default:
			cout << "Invalid Choice\n";
		}

		//Game Logic

		if (Player1 == computer)
		{
			cout << IGN << " Choice was " << Player1 << " and Computers Choice was " << computer << endl;
			cout << "Draw Game\n";
		}
		else if (Player1 == 1 && computer == 3)
		{
			cout << IGN << " Choice was " << rock << " and smashes Computers Choice " << scissors << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 1 && computer == 4)
		{
			cout << IGN << " Choice was " << rock << " and crushes Computers Choice " << lizard << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 2 && computer == 1)
		{
			cout << IGN << " Choice was " << paper << " and covers Computers Choice " << rock << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 2 && computer == 5)
		{
			cout << IGN << " Choice was " << paper << " and disproves Computers Choice " << spock << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 3 && computer == 2)
		{
			cout << IGN << " Choice was " << scissors << " and cuts Computers Choice " << paper << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 3 && computer == 4)
		{
			cout << IGN << " Choice was " << scissors << " and decapitates Computers Choice " << lizard << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 4 && computer == 2)
		{
			cout << IGN << " Choice was " << lizard << " and eats Computers Choice " << paper << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 4 && computer == 5)
		{
			cout << IGN << " Choice was " << lizard << " and poisons Computers Choice " << spock << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 5 && computer == 3)
		{
			cout << IGN << " Choice was " << spock << " and smashes Computers Choice " << scissors << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else if (Player1 == 5 && computer == 1)
		{
			cout << IGN << " Choice was " << spock << " and vaporizes Computers Choice " << rock << endl;
			cout << IGN << " Wins\n";

			Player_Score++;
		}
		else
		{
			cout << IGN << " Choice was " << Player1 << " and Computers Choice was " << computer << endl;
			cout << "Computer Wins!\n";

			Computer_Score++;
		}

		//output that would go to the file
		file << Player_Score << endl;
		file << Computer_Score << endl;

		// output for the screen
		cout << "\n";
		cout << "=============" << endl;
		cout << "=Score Board=" << endl;
		cout << "=============" << endl;

		cout << IGN << ": " << Player_Score << endl;
		cout << "Computer: " << Computer_Score << endl;

		if (Player_Score == Computer_Score)
		{
			cout << "The Game is Currently Tied." << endl;
		}
		else if (Player_Score > Computer_Score)
		{
			cout << IGN << " is Currently Winning." << endl;
		}
		else
		{
			cout << "The Computer is Currently Winning." << endl;
		}

		cout << "=======================================\n\n";
		
		string rechoice;
		cout << "Would You like to rematch??? (Y/N): ";
		cin >> rechoice;

		if (rechoice == "Y")
		{
			computer = rand() % 5 + 1;
			continue;
		}
		else if (rechoice == "N")
		{
			Rematch == false;
			break;
		}
		
		while (rechoice != "Y" && rechoice != "N")
		{
			cout << "Error Invalid input, Enter again: ";
			cin >> rechoice;
		}
	}

	file.close();
	cout << "Thanks For Playing!" << endl;

	return 0;
}
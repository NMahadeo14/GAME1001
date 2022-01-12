#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item
{
private:
	bool m_owned; // a Bool flag to know if you own that weapon
	string m_name; // string name for the weapon
	string m_sound; // string for the sound weapon makes when its used
	double m_price; // price of the current item
	vector<string> m_invetory; // Vector thats holding all of the items
	double m_balance = 900; // balance 

public:
	Item();
	void Buy(string, int); // buy function (adds the item to the Vector)
	double Transaction(int); // minus the balance of the item bought
	double checkBalance(); // shows the balance of the player
	bool hasEnough(int); // check if the player has enough money to buy
	void displayVector(); // displays the players current inventory
	string getSound(string); // Returns the sound string of the current item
	string getName(int); // returns the name string of the current item 

};

Item::Item()
{
	m_owned = false;
	m_price = 0;
	m_invetory.reserve(9);
}

double Item::checkBalance()
{
	return m_balance;
}

bool Item::hasEnough(int price)
{
	if (m_balance > price || m_balance == price || m_balance > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Item::Buy(string name, int price)
{
	m_name = name;
	
	if (hasEnough(price) || m_invetory.empty() && m_invetory.size() < 9 && this->m_owned == false)
	{
		m_invetory.push_back(m_name);
		this->m_owned = true;
	}
	else if (m_invetory.size() > 9)
	{
		cout << "Inventory Full: You are over encumbered and may not be able to run!!" << endl;

		cout << "\n";
	}
	else if (m_balance <= 0)
	{
		cout << "Insufficient funds: HAHA Broke boy" << endl;
	}
			
}

void Item::displayVector()
{
	cout << "Player's Current Inventory: ";

	for (unsigned i = 0; i < m_invetory.size(); i++)
	{
		cout << m_invetory[i] << ", ";
	}

	cout << endl;
}

double Item::Transaction(int price)
{
	if (m_balance > 0)
	{
		m_balance = m_balance - price;
	}
	return m_balance;
}

string Item::getSound(string name)
{
	if ("Master-Sword" == name)
	{
		m_sound = "Hyahhhh";
	}
	else if ("Hidden-Blade" == name)
	{
		m_sound = "Shhhinggg";
	}
	else if ("Blue-Shell" == name)
	{
		m_sound = "Boom";
	}
	else if ("Energy-Sword" == name)
	{
		m_sound = "zzwing";
	}
	else if ("KeyBlade" == name)
	{
		m_sound = "Clangg";
	}
	else if ("Portal-Gun" == name)
	{
		m_sound = "Portallll";
	}
	else if ("Operator" == name)
	{
		m_sound = "Bing";
	}
	else if ("GoldenGun" == name)
	{
		m_sound = "Do do do dooooo";
	}
	else if ("Health-Potion" == name)
	{
		m_sound = "Sigh";
	}
	else if ("Mana-Potion" == name)
	{
		m_sound = "Whew";
	}

	return m_sound;
}

string Item::getName(int inx)
{
	return m_invetory[inx - 1];
}

int main()
{
	int input;
	int option;
	int item;
	Item MyInventory;
	bool Quit = false;
	bool HasPurchase = false;
	bool IsSimulating = true;
	vector<Item*> Inventory;

	while (Quit == false || HasPurchase == false)
	{
		cout << "Please select an option: " << endl;
		cout << "1. Buy Weapon" << endl;
		cout << "2. Check Balance" << endl;
		cout << "3. Exit Store" << endl;

		cout << "---> ";
		cin >> input;

		switch (input)
		{
		case 1:
			if (input == 1)
			{
				string name;
				double price;

				cout << "Take a Look at what ive got Selling: " << endl;
				cout << "\n";

				cout << "Master-Sword ---> 900 gold" << endl;
				cout << "Hidden-Blade ---> 700 gold" << endl;
				cout << "Blue-Shell ---> 500 gold" << endl;
				cout << "Energy-Sword ---> 400 gold" << endl;
				cout << "KeyBlade ---> 300 gold" << endl;
				cout << "Portal-Gun ---> 300 gold" << endl;
				cout << "Operator ---> 300 gold" << endl;
				cout << "GoldenGun ---> 200 gold" << endl;
				cout << "Health-Potion ---> 50 gold" << endl;
				cout << "Mana-Potion ---> 50 gold" << endl;

				cout << "\n";
				cout << "Enter the name of the Item: ";
				cin >> name;
				cout << "Enter the price of the Item: ";
				cin >> price;

				cout << "\n";

				MyInventory.Buy(name, price);
				MyInventory.Transaction(price);

				HasPurchase = true;
				break;
			}
		case 2:
			if (input == 2)
			{
				cout << "The current Balance is " << MyInventory.checkBalance() << endl;
				break;
			}
		case 3:
			if (input == 3)
			{
				system("CLS");
				if (HasPurchase == true)
				{
					cout << "Exiting the store" << endl;
					Quit = true;
					cout << "\n";
				}
				else
				{
					cout << "Its Dangerous to go alone, Buy at least one item" << endl;
				}
				
				break;
			}
		}
	}

	while (IsSimulating == true)
	{
		cout << "Please Select an Option: " << endl;
		cout << "1.Equip Item" << endl;
		cout << "3.Quit" << endl;

		cout << "Press 2 to use item" << endl;

		cout << "---> ";
		cin >> option;

		switch (option)
		{
		case 1:

			if (option == 1)
			{

				cout << "Which Item Do You want Equipped ?" << endl;
				MyInventory.displayVector();
				cout << "---> ";
				cin >> item;

				cout << "Player Equipped the item " << MyInventory.getName(item) << endl;

				cout << "\n";
			}
		case 2:

			if (option == 2)
			{
				cout << "Player used item: " << MyInventory.getName(item) << " *" << MyInventory.getSound(MyInventory.getName(item)) <<"*"<< endl;

				cout << "\n";
			}

		default:
			if (option == 3)
			{
				system("CLS");
				IsSimulating = false;
				cout << "Exiting the Simulation" << endl;
				break;
			}
		}
	}

	return 0;
}
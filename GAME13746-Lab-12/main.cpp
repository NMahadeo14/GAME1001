#include <iostream>
using namespace std;

class Animal
{
private:
	string m_name;
	int m_legs;
public:
	Animal(string name, int legs)
	{
		cout << "Creating another animal" << endl;
		m_name = name;
		m_legs = legs;
	}
	void speak()
	{
		cout << "Hi my name is " << m_name << endl;
	}
	int getLegs()
	{
		return m_legs;
	}
	void setlegs(int legs)
	{
		if (legs < 0)
		{
			m_legs = 4;
		}
		else
		{
			m_legs = legs;
		}
	}
	string getName()
	{
		return m_name;
	}
	void setName(string name)
	{
		m_name = name;

	}
};

class Cat : public Animal // inherit from Animal class
{
public:
	Cat(string name, int legs) : Animal(name, legs)
	{
		cout << "Creating a kitty" << endl;
	}
	void speak()
	{
		cout << "Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name, int legs) : Animal(name, legs)
	{
		cout << "Creating a Good Boy" << endl;
	}
	void speak()
	{
		cout << "Bark" << endl;
	}
};


int main()
{
	Animal FirstAnimal("Penguin", 2);
	Cat FirstCat("Leo", 4);
	Dog FirstDog("Maru", 4);
	FirstAnimal.speak();
	FirstCat.speak();
	FirstDog.speak();

	return 0;
};
#include <iostream>
#include <vector>
#include <algorithm>
#include "Character.h"
using namespace std;
#define HEALTH 30;

Character::Character()
{
	m_name = "Player1";
	m_attack = GetAttack();
	m_hp = HEALTH;
}

string Character::GetName()
{
	cout << "Enter the name of your Character: ";
	cin >> m_name;

	return m_name;
}

int Character::GetAttack()
{
	vector<int> AttackVector;
	srand(time(0));

	int attack;

	for (int i = 0; i < 10; i++)
	{
		AttackVector.push_back(rand() % 100 + 1);
	}

	sort(AttackVector.begin(), AttackVector.end());

	attack = AttackVector[rand() % AttackVector.size()];

	return attack;
}

void Character::display() const
{
	cout << "\nCharacters Information and Stats" << endl;
	cout << "Name: " << this->m_name << endl;
	cout << "Hp: " << this->m_hp << endl;
	cout << "Attack: "  << this->m_attack << endl;
	cout << "\n";
}

 
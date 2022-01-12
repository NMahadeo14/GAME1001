#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include <iostream>
#define HEALTH 30;

namespace std
{
	class Character
	{
	private:
		string m_name;
		int m_hp;
		int m_attack;
	public:
		Character();
		string GetName();
		int GetAttack();
		void display() const;
	};
}


#endif // !_CHARACTER_H_


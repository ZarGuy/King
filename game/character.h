#ifndef CHARACTER.H
#define CHARACTER.H
#include <iostream>
#include <string>
using namespace std;

class Character{
protected:
	string name;
	int health;
	int attackPower;
public:
	Character(string n, int h, int a);

	virtual ~Character();

	virtual void attack(Character& target) = 0;

	void takeDamage(int damage);

	bool isAlive() const;

	string getName();

	int getHealth();

	int getHealth() const;
};
#endif
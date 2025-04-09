#ifndef ENEMY.H
#define ENEMY.H

#include "character.h"

using namespace std;

class Enemy : public Character {
public:
	Enemy(string n, int h, int a);

	void attack(Character& target) override;
};
#endif


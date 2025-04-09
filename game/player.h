#ifndef PLAYER.H
#define PLAYER.H

#include "character.h"
#include "item.h"
#include <vector>

using namespace std;

class Player : public Character {
private:
	int level;
	int exp;
	int gold;
	vector<Item> inventory;
public:
	Player(string n, int h, int a);

	void attack(Character& target) override;

	void getExp(int xp);

	void levelup();

	void heal();

	void showInventory();

	void useItem();

	void addItem();

	int getGold() const;

	void addGold(int amount);

	bool spendGold(int amount);
};
#endif


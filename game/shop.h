#ifndef SHOP.H
#define SHOP.H

#include "item.h"
#include "player.h"
#include <vector>
using namespace std;

class Shop {
private:
	vector<Item> stock;
public:
	Shop();
	void displayItems();
	void buyItems(Player& player);
};
#endif
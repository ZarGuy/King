#include <iostream>
#include <battle.h>

using namespace std;

void startBattle(Player& player, Enemy& enemy) {
	cout << "Battle starts agains " << player.getName() << " and " << enemy.getNmae() << endl;
	while (player.isAlive() && enemy.isAlive) {
		player.attack(enemy);
		if (!enemy.isAlive()) {
			cout << enemy.getName() << "is defeated" << endl;
			break;
		}

		enemy.attack(player);
		if (!player.isAlive()) {
			cout << player.getName() << "is defeated" << endl;
			break;
		}
	}
}

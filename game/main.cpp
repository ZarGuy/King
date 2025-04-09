#include <player.h>
#include <enemy.h>
#include <battle.h>

int main() {
	Player player("Nikich", 70, 11);
	Enemy enemy("Uslam", 150, 5);

	startBattle(player, enemy);

	return 0;
}
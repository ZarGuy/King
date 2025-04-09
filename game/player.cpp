#include "player.h"
using namespace std;

Player::Player(string n, int h, int a) : Character(n,h,a) {}


void Player::attack(Character& target) {
	cout << name << " attacks " << target.getName() << " with " << attackPower << " damage" << endl;
	target.takeDamage(attackPower);
}
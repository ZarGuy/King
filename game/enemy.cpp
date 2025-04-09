#include <enemy.h>
using namespace std;

Enemy::Enemy(string n, int h, int a) : Character(n, h, a) {}


void Enemy::attack(Character& target) {
	cout << name << " attacks " << target.getName() << " with " << attackPower << " damage" << endl;
	target.takeDamage(attackPower);
}
#ifndef PLAYER.H
#define PLAYER.H

#include <character.h>

using namespace std;

class Player : public Character {
public:
	Player(string n, int h, int a);

	void attack(Chatacter& target) override;
};
#endif


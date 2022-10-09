#ifndef WIZARD_H
#define WIZARD_H

#include "Character.h"

class Wizard : public Character
{
public:
	Wizard(std::string name, int hp, int magic): Character(name, hp), magic(magic){}

	void startBattle() {
		attack = (rand() % 10) + 2 + magic;
		defence = (rand() % 10) + 2;

	}

private:
	int magic;

};

#endif // !Wizard_H

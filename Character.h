#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class Character
{
public:
	Character(std::string name, int hp):name(name), hp(hp){}

	virtual void startBattle() {
		attack = (rand() % 10) + 2;
		defence = (rand() % 10) + 2;
	}
	virtual void takeDamage(int damage) {
		hp -= damage;
	}
	
	void battle(Character* enemy) {
		if (attack > enemy->defence) {
			int damage = attack - enemy->defence;
			enemy->takeDamage(damage);
			std::cout << name << " hits for " << damage << std::endl;
		}
		else {
			std::cout << name << " attempts to hit but is blocked " << std::endl;
		}
	}

	int getHp() {
		return hp;
	}

	friend std::ostream &operator << (std::ostream &output, const Character &c) {
		output << c.name << " hp: " << c.hp << std::endl;
		return output;
	}
protected:
	std::string name;
	int defence;
	int attack;
	int hp;
};

#endif // !CHARACTER_H
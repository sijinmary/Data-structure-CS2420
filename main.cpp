#include <iostream>
#include <ctime>
#include "Wizard.h"

using  namespace std;

int main() {

	srand(time(nullptr));
	Character *gandolf = new Wizard("Gandolf", 100, 9);
	Wizard *saron = new Wizard("Saron", 100, 7);

	do {
		saron->startBattle();
		gandolf->startBattle();

		saron->battle(gandolf);
		gandolf->battle(saron);
		std::cout << *gandolf << std::endl;
		std::cout << *saron << std::endl;

	} while (saron->getHp() > 0 && gandolf->getHp() > 0);
	if (saron->getHp() > gandolf->getHp()) {
		std::cout << "Middle Earth is doomed" << std::endl;
	}
	else {
		std::cout << "Middle Earth has a chance" << std::endl;
	}
}
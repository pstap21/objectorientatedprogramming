#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string n, int h, int d, int m) : Player(n, h, d), mana(m) {}

void Wizard::castSpell(Player* opponent) {
    std::cout << name << " casts a spell on " << opponent->getName() << "!" << std::endl;
    attack(opponent, damage);
}

int Wizard::getMana() const { return mana; }
void Wizard::setMana(int m) { mana = m; }

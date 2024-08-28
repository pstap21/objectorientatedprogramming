#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string n, int h, int d, std::string w) : Player(n, h, d), weapon(w) {}

void Warrior::swingWeapon(Player* opponent) {
    std::cout << name << " swings " << weapon << " at " << opponent->getName() << "!" << std::endl;
    attack(opponent, damage);
}

std::string Warrior::getWeapon() const { return weapon; }
void Warrior::setWeapon(std::string w) { weapon = w; }

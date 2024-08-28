#include "player.h"
#include <iostream>

Player::Player(std::string n, int h, int d) : name(n), health(h), damage(d) {}

void Player::attack(Player* opponent, int dmg) {
    opponent->takeDamage(dmg);
}

void Player::takeDamage(int dmg) {
    health -= dmg;
    std::cout << name << " took " << dmg << " damage! Remaining health: " << health << std::endl;
}

int Player::getHealth() const { return health; }
void Player::setHealth(int h) { health = h; }
int Player::getDamage() const { return damage; }
void Player::setDamage(int d) { damage = d; }
std::string Player::getName() const { return name; }
void Player::setName(std::string n) { name = n; }

Player::~Player() {}

#include <iostream>
#include "player.h"

#include <string>
using namespace std;

class Player {
protected:
    string name;
    int health;
    int damage;

public:
    Player(string n, int h, int d) : name(n), health(h), damage(d) {}

    virtual void attack(Player* opponent, int dmg) {
        opponent->takeDamage(dmg);
    }

    virtual void takeDamage(int dmg) {
        health -= dmg;
        cout << name << " takes " << dmg << " damage! Remaining health: " << health << endl;
    }

    int getHealth() const { return health; }
    void setHealth(int h) { health = h; }
    int getDamage() const { return damage; }
    void setDamage(int d) { damage = d; }
    string getName() const { return name; }
    void setName(string n) { name = n; }

    virtual ~Player() {}
};

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(string n, int h, int d, int m) : Player(n, h, d), mana(m) {}

    void castSpell(Player* opponent) {
        cout << name << " casts a spell on " << opponent->getName() << "!" << endl;
        attack(opponent, damage);
    }

    int getMana() const { return mana; }
    void setMana(int m) { mana = m; }
};

class Warrior : public Player {
private:
    string weapon;

public:
    Warrior(string n, int h, int d, string w) : Player(n, h, d), weapon(w) {}

    void swingWeapon(Player* opponent) {
        cout << name << " swings " << weapon << " at " << opponent->getName() << "!" << endl;
        attack(opponent, damage);
    }

    string getWeapon() const { return weapon; }
    void setWeapon(string w) { weapon = w; }
};

int main() {
    Wizard wizard("Gandalf", 100, 25, 50);
    Warrior warrior("Aragorn", 120, 20, "sword");

    // Simulate battle
    cout << "The battle begins!" << endl;

    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() <= 0) break;

        warrior.swingWeapon(&wizard);
        if (wizard.getHealth() <= 0) break;
    }

    if (wizard.getHealth() > 0) {
        cout << wizard.getName() << " wins the battle!" << endl;
    } else {
        cout << warrior.getName() << " wins the battle!" << endl;
    }

    return 0;
}

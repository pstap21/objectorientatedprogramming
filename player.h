#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string n, int h, int d);

    virtual void attack(Player* opponent, int dmg);
    virtual void takeDamage(int dmg);

    int getHealth() const;
    void setHealth(int h);
    int getDamage() const;
    void setDamage(int d);
    std::string getName() const;
    void setName(std::string n);

    virtual ~Player();
};

#endif // PLAYER_H

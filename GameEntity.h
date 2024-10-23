#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple> //for std::tuple

enum class GameEntityType {
    ExplosionType,
    MineType,
    NoType,
    ShipType
};

//base type class

class GameEntity {
    protected:

    std::tuple <int, int> position; //postition of (x,y)
    GameEntityType type;

    public:
    //constructor
    GameEntity(int x, int y, char typeChar) {
    position = std::make_tuple(x, y);

    switch (typeChar){
        case 'E' : type = GameEntityType::ExplosionType; break;
        case 'M' : type = GameEntityType::MineType; break;
        case 'S' : type = GameEntityType::ShipType; break;
        default: type = GameEntityType::NoType; break;
    }
    }
    
    

    

    //getters returns position of entity
    std::tuple< int, int> getPos() const {
        return position;
    }

//getter returns type of entity
GameEntityType getType() const {
    return type;
}



};

#endif
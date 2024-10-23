#ifndef GRID_ITEM_H
#define GRID_ITEM_H
#endif 
#include <iostream>

class GridItem {

    public:

    GridItem(int x, int y, int width, int height) {
        position = std::make_tuple(x, y, width, height);
    int x = 0;
    int y = 0;
    int width = 0;
    int height = 0;
    }


    void setCooridinates(int x, int y);
    std::pair getCoordinates();

    int getActiveItemCount();

    virtual ~GridItems()
}

    #endif

  









































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
    
    



void setCoordinates(int x, int y)
std::pair getCoordinates();

int getActiveGridItemCount

virtual ~GridItems()




#endif
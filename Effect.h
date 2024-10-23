#ifndef EFFECT
#define EFFECT

#include "GameEntity.h"

//abstract class

class Effect {
    public:
    //virtual void functions
    virtual void apply(GameEntity& entity)= 0;

    //virtual destructor
    virtual ~Effect() = default;

};

#endif
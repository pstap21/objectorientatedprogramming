#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
    public:
    Car(int id);

    int getParkingDuration() const override; //override ensures that a virtual function in a derived class correctly overrides a virtual function in the base class.

};

#endif  //CAR_H

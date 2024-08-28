#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle** vehicles;
    int maxCapacity;
    int count;

public:
    ParkingLot(int capacity);
    ~ParkingLot();

    int getCount() const;

    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int vehicleID);
};

#endif // PARKINGLOT_H

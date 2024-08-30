#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < currentCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        vehicles[currentCount++] = vehicle;
        return true;
    }
    std::cout << "The lot is full" << std::endl;
    return false;
}

bool ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < currentCount - 1; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            --currentCount;
            return true;
        }
    }
    std::cout << "The vehicle is not in the lot" << std::endl;
    return false;
}

int ParkingLot::getCount() const {
    return currentCount;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            ++count;
        }
    }
    return count;
}

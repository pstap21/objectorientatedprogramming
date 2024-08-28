#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), count(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return count;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < maxCapacity) {
        vehicles[count++] = vehicle;
        std::cout << "Vehicle ID " << vehicle->getID() << " parked." << std::endl;
        return true;
    } else {
        std::cout << "The lot is full." << std::endl;
        return false;
    }
}

bool ParkingLot::unparkVehicle(int vehicleID) {
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getID() == vehicleID) {
            std::cout << "Vehicle ID " << vehicleID << " unparked." << std::endl;
            delete vehicles[i];
            vehicles[i] = vehicles[--count]; // Fill the gap by shifting the last vehicle
            return true;
        }
    }
    std::cout << "The vehicle is not in the lot." << std::endl;
    return false;
}

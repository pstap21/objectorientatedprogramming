#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    ParkingLot lot(10);  // Parking lot with capacity for 10 vehicles

    // Park 5 Cars
    for (int i = 0; i < 5; ++i) {
        Vehicle* car = new Car(i + 1);
        lot.parkVehicle(car);
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }

    // Park 3 Buses
    for (int i = 5; i < 8; ++i) {
        Vehicle* bus = new Bus(i + 1);
        lot.parkVehicle(bus);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    // Park 2 Motorbikes
    for (int i = 8; i < 10; ++i) {
        Vehicle* motorbike = new Motorbike(i + 1);
        lot.parkVehicle(motorbike);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    // Count and print the number of overstaying vehicles
    int overstayingVehicles = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that have overstayed more than 15 seconds: " << overstayingVehicles << std::endl;

    return 0;
}

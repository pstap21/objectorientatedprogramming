#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    ParkingLot lot(10);

    int choice;
    int id = 1;

    std::cout << "Welcome to the Parking Lot Simulator!" << std::endl;

    while (lot.getCount() < 10) {
        std::cout << "Select vehicle type to park:\n1. Car\n2. Bus\n3. Motorbike\n4. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 4) break;

        Vehicle* vehicle = nullptr;
        switch (choice) {
            case 1:
                vehicle = new Car(id++);
                break;
            case 2:
                vehicle = new Bus(id++);
                break;
            case 3:
                vehicle = new Motorbike(id++);
                break;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
                continue;
        }

        lot.parkVehicle(vehicle);
    }

    int unparkID;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> unparkID;

    lot.unparkVehicle(unparkID);

    return 0;
}

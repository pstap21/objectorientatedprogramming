#include "Car.h"
#include "Bus.h"
#include "Vehicle.h"
#include "Motorbike.h"
#include <iostream>
#include <vector>


int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter number of motorbikes: ";
    std::cin >> numMotorbikes;

    std::vector <Vehicle*> vehicles;

    //create and add Car objects
    for (int i = 0; i < numCars; i++){
        vehicles.push_back(new Car(i+1));

    }
    for (int i = 0; i < numBuses; i++){
        vehicles.push_back(new Bus(i+1 + numCars));

    }

    for (int i = 0; i < numMotorbikes; i++){
        vehicles.push_back(new Motorbike(i+1 + numCars + numBuses));


}

//time passage
std::cout << "Press enter to check parking duration..: ";
std::cin.ignore();
std::cin.get();

//display parking duration
for (const auto& vehicle  : vehicles) {
    std::cout << "Vehicle ID: " << vehicle->getID()
    << " | Parking Duration: " << vehicle->getParkingDuration() << " seconds" << std::endl;

}

//clear memoory

for (auto& vehicle :vehicles) {
    delete vehicle;

}

return 0;
}

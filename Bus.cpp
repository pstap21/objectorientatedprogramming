#include "Bus.h"
#include <ctime>

Bus::Bus (int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast <int> (difftime(now, timeOfEntry));
    return static_cast<int> (duration *0.75); // reduction of 25% for bus parking

}
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>
#include <ctime>
#include <utility>

int main () {

    srand(static_cast<unsigned int>(time(0)));

    // Grid dimensions
    int gridWidth = 10;
    int gridHeight = 10;

    // Generate random positions using std::tuple
    std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    // Output positions
    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    // Calculate the distance
    double distance1to2 = Utils::calculateDistance(pos1, pos2);

    // Output the distance
    std::cout << "Distance from position 1 to 2 is: " << distance1to2 << "\n";

    return 0;
}

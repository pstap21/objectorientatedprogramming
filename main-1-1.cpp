
#include <iostream>
#include "musician.h"

int main() {
    Musician m1;
    std::cout << "Default instrument: " << m1.get_instrument() << ", Default experience: " << m1.get_experience() << std::endl;
//above will print the default instrument and defult experience


    Musician m2("guitar", 5);
    std::cout << "Instrument: " << m2.get_instrument() << ", Experience: " << m2.get_experience() << std::endl;

    return 0;
}
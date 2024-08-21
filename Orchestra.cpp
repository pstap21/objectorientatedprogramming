#include <iostream>
#include "Orchestra.h"
#include "musician.h"

// Default constructor
Orchestra::Orchestra() : size(0), currentNum(0), array(nullptr) {}

// Constructor for an orchestra of given size
Orchestra::Orchestra(int size) : size(size), currentNum(0) {
    array = new Musician[size];
}

// Destructor
Orchestra::~Orchestra() {
    delete[] array;
}

// Returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() {
    return currentNum;
}

// Returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(const std::string& instrument) {
    for (int i = 0; i < currentNum; i++) {
        if (array[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

// Returns the array of members of the orchestra
Musician* Orchestra::get_members() {
    return array;
}

// Returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(const Musician& new_musician) {
    if (currentNum < size) {
        array[currentNum] = new_musician;
        currentNum++;
        return true;
    }
    return false;
}

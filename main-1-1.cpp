#include <iostream>
#include "Person.h"

// Declaration of the function
Person* createPersonArray(int n);

int main() {
    int n = 5; // Example size of the array
    
    // Create an array of Person structs
    Person* people = createPersonArray(n);
    
    // Print the details of each Person struct
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << people[i].name << ", Age: " << people[i].age << std::endl;
    }
    
    // Deallocate the memory for the array
    delete[] people;
    
    return 0;
}

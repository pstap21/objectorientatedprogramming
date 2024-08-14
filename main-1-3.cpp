#include <iostream>
#include "Person.h"

//  function
PersonList deepCopyPersonList(PersonList pl);

int main() {
    int n = 4; // size of array
    
    // Create a PersonList struct
    PersonList originalList = createPersonList (n);
    
    // Create deep copy
    PersonList copiedList = deepCopyPersonList(originalList);
    
    // each Person in the original PersonList
    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << originalList.people[i].name << ", Age: " << originalList.people[i].age << std::endl;
    }
    
    //  details of each Person in the copied PersonList
    std::cout << "Copied PersonList:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << copiedList.people[i].name << ", Age: " << copiedList.people[i].age << std::endl;
    }
    
    // Deallocate the memory 
    delete[] originalList.people;
    delete[] copiedList.people;
    
    return 0;
}

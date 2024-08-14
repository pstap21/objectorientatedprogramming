#include <iostream>
#include "Person.h"

// Declaration of the function
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 5; // Example size of the array
    
    // Create a PersonList struct
    PersonList originalList = createPersonList(n);
    
    // Create a shallow copy of the original PersonList
    PersonList copiedList = shallowCopyPersonList(originalList);
    
    // Print the details of each Person in the original PersonList
    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << originalList.people[i].name << ", Age: " << originalList.people[i].age << std::endl;
    }
    
    // Print the details of each Person in the copied PersonList
    std::cout << "Copied PersonList (shallow copy):" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " << copiedList.people[i].name << ", Age: " << copiedList.people[i].age << std::endl;
    }
    
    // Note: Do not delete the memory for the people array, as it is shared between originalList and copiedList
    
    return 0;
}

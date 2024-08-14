#include "Person.h"

// Function to create a shallow copy of a PersonList struct
PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;
    
    // Make the people field point to the same array as the original
    newPersonList.people = pl.people;
    
    return newPersonList;
}

#include "Person.h"

//create a deep copy of PersonList
PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;

    newPersonList.people = new Person[newPersonList.numPeople];

    //copy data from the orginal PersonList
    for (int i = 0; i < newPersonList.numPeople; i++) {
        newPersonList.people[i].name = pl.people[i].name;
        newPersonList.people[i].age = pl.people[i].age;

    }

    return newPersonList;
}
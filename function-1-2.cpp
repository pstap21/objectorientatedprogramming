#include "Person.h"

PersonList createPersonList (int n) {
    PersonList personList;
    personList.numPeople = n;

    //array of Person structs
    personList.people = new Person[n];

    //initialise the array
    for ( int i =0; i < n; i++) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;

    }

    return personList;
}
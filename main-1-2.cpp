#include <iostream>
#include "Person.h"

//declare function
PersonList createPersonList(int n);

int main(){
    int n = 4;

    //creat PersonList struct
    PersonList personList = createPersonList(n);

    //iteration of each person in the PersonList
    for (int i = 0; i < n; i++) {
        std::cout << "Person" << i + 1 << ": "<< personList.people[i].name << ", Age" << personList.people[i].age << std::endl;

    }
    //free memory fron the Person araay created
    delete[]  personList.people;

    return 0;

}
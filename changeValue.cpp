#include <iostream>

int main (){

double paigesDouble = 7;
char paigesChar = 'R' ;

//declaring pointers

double* ptrDouble = &paigesDouble;
char* ptrChar = &paigesChar;

//print out the variables by using its pointers

std::cout << "Value of paigesDouble: " << *ptrDouble << std::endl;
std::cout << "Value of paigesChar: " << *ptrChar << std::endl;

return 0;

}

//the *operator is used to dereference the pointer and print the values that the variables point to.
//the values that should be displayed are paigesDouble and paigesChar


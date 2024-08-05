#include <iostream>
#include "part2headerfile.h"



//declare function to be used

void changeValue(double* ptr);


int main(){

    double paigesDouble = 5;

    //print the orginal value of paigesDouble

    std::cout << "Value of paigesDouble: " << paigesDouble << std::endl;

    //calling the function
    changeValue(&paigesDouble);

    //print the value of the double
    std::cout << "value of paigesDouble after changeValue: " << paigesDouble << std::endl;

    return 0;



}
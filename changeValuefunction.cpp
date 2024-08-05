# include <iostream>
#include "part2headerfile.h"


void changeValue (double* ptr){
    *ptr = 42.0;

}

//Passing a pointer:
//changeValue function modifies the value of paigesDouble as it receives the address of paigesDouble and dereferences it to change its value

//if we passed the double directly onto the function, the function received a copy of paigesDouble's value. modifications to this variable inside the function wont affect the output
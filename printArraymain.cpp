#include <iostream>
#include "printArrayheaderfile.h"

int main(){

    double array [] = {1, 2, 3, 4, 5};

    int size = sizeof(array) / sizeof (array[0]);

    printArray (array, size);
    
    return 0;
    
    }
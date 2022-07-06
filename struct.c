/*********************
 struct is short for structure. composite data type declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address.
**********************/
//! struct can be loosely used as object oriented programming. though it is nowhere near OOP.

//*first we gotta create the structure
struct student
    {
        int roll;
        int age;
    };

#include <stdio.h>
int main(){
    //* then we gotta create a variable based on the structure
    struct student fahimMuntasir;
    
    fahimMuntasir.roll = 1601107;
    fahimMuntasir.age = 24;

    printf("Fahim Muntasir roll : %d", fahimMuntasir.roll);

}
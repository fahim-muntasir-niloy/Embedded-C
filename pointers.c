#include<stdio.h>
int main(int argc, char const *argv[])
{
    // pointers is the memory location of any variable or anything
    //! #define cant be used for strings

    int age = 25;           //* age variable holds 25
    int *pAge = &age;       //* pAge is the pointer for the age variable. Holds age variable location

    double mark = 23.2;
    double *pMark = &mark;

    //* [%p] is used to view memory locations.  

    printf("%p",&pAge);     
    //* prints the memory location stored in pAge variable

    printf("%d",*pAge);     
    //* dereferencing of pointer. This prints the data held at that memory location


    return 0;
}

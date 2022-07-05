#include <stdio.h>
#include <math.h>

//this is for the function segment, dont bother before
void stupidFunc( int x, int y ){
    printf("This is a stupid function.\n This doesnt return anything.\n Just prints %d, %d.\n",x,y);
}

int main(){

    printf("is this C?\n");         //basic print function

//! data types

    float age = 70.9840;            //see w3schools.com for quick overview on data type
    char name[] = "metrosemi ltd.";
    printf("%f %i bytes",age,sizeof(age));
    printf("He is %s and he is %d years old",name,age);


//! math operation
//insert math.h in the beginning for using these operations.
printf("%f\n",ceil(4232.129));
printf("%f",sqrt(49));

//!user input

printf("Enter your age: ");
int age;
scanf("%d", &age);                  // & is used to store the scanned value in the variable
printf("Your age is %d",age);


//! arrays in C
int arrNumbers[] = {1,2,3,5,45,234,352,242,5234,1414};
arrNumbers[2] = 200;
printf("%d",arrNumbers[2]); //prints 200

//!Function in C
stupidFunc(10,20);



return 0;
}


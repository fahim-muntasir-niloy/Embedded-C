#include<stdio.h>

//prototyping is way of using function after the main function.
void randFunc();

int main(int argc, const char** argv) {

    randFunc();
    return 0;
}

//this is a random function
void randFunc(){
    printf("This is a random print");
}

#include<stdio.h>

//prototyping is way of using function after the main function.
// this is how you protoype
void randFunc();
int maxNum(int a, int b);

int main(int argc, const char** argv) {
    randFunc();
    maxNum(2213,34);
    return 0;
}

//this are some functions
void randFunc(){
    printf("This is a random print\n");
}

int maxNum(int a, int b){
    if (a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
}

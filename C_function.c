#include <stdio.h>
#include <math.h>

//  this is the function to call, void function doesnt return anything
void engineLoop(int start, int end){
    printf("Engine routine\nEngine starts at %d\nEngine operation stops at %d",start,end);
}

//to get any return value
double quad( int num ){
    double result = num*num*num*num;
    return result;
};

//  this is the main function
int main(){
    //this is to call the void function
    int s, e;
    printf("Give start and stop time\nStart time:");
    scanf("%d",&s);
    printf("Stop time:");
    scanf("%d",&e);
    engineLoop(s,e);


    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Answer: %f",quad(n));

    
    return 0;
}
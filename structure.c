#include <stdio.h>

struct employee
{
    char laptop[30];
    int salary;
    int devices;
};

int main(int argc, char const *argv[])
{
    struct employee maruf;
    struct employee meshkat;

    strcpy(maruf.laptop, "Dell");
    
    printf("Marufs Laptop is: %s", maruf.laptop);
    // scanf("%d",&meshkat.salary);
    // printf("Meshkat's Salary is: %d", meshkat.salary);



    return 0;
}

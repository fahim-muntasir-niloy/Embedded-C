// This might be the easiest table calculation

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want table of : ");
    scanf("%d",&a);
    int i = 1;
    while( i <= 10 ){
        printf("%d x %d = %d\n",a,i,i*a);
        i++;
    };
    return 0;
}

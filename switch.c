#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    switch (number)
    {
    case 90:
        printf("Great marks");
        break;
    case 80:
        printf("Good marks");
        break;        
    default:
    printf("Enter valid number");
        break;
    }
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // array elements start to count from 0. so in a 3x3 matrix, the last item is [2][2] 

    int twoD_arr[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
// printf("%d",twoD_arr[2][2]); //this prints only the single item
// to print the whole 2D array, we gotta use nested for loop

//! here i is for rows, j is for columns.

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ",twoD_arr[i][j]);
    }
    printf("\n");
}
    return 0;
}

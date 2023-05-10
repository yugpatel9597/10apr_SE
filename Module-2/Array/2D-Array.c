// 2D array use to work on row and column 
#include<stdio.h>
int main()
{
    int array[5][5];
    int i;
    int j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter the value of array[%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nValue of the array :%d", array[i][j]);
        }
    }
    return 0;
}
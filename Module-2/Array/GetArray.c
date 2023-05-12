// Dynamic value for the 1 Dimension array
#include<stdio.h>
int main()
{
    int array[20];
    int i;
    for( i = 0; i < 5; i++)
    {
        printf("\nEnter the value of array[%d]:", i);
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("\nThe array is: %d", array[i]);
    }
    return 0;
}

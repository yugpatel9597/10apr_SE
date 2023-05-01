// Nested if means condition  is inside the other condition
// WAP to check the max variable among the three variable. 
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of the a:");
    scanf("%d",&a);
    printf("Enter the value of the b:");
    scanf("%d",&b);
    printf("Enter the value of the c:");
    scanf("%d", &c);
    if (a > b)
    {
        // Nested condition
        if (a > c)
            printf("\nA is max.");
        else
            printf("\nC is max.");
    }
    else
    {
        // Nested Condition
        if (b > c)
            printf("\nB is max.");
        else
            printf("\nC is max.");
    }
    return 0;
}
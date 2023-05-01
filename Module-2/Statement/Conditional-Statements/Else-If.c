// Else-If use to give the outer condition
// WAP to check value is negative or positive
#include<stdio.h>
int main()
{
    int no;
    printf("Enter th value of the no:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("The value is positive");
    }
    else if (no < 0)
    {
        printf("The value is negative");
    }
    else
    {
        printf("The value is zero");
    }
    return 0;
}
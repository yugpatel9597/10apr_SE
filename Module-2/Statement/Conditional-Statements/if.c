// Simple if is used when there's no choice
// between two or more options.
#include<stdio.h>
int main()
{
    int no;
    printf("Enter the value of the no:");
    scanf("%d", &no);
    if (no % 2 == 0)
    {
        printf("%d is even.", no);
    }
    return 0;
}
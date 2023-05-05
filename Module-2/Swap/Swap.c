// Swap the 2 value using third variable

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    // Swapping
    c = a;
    a = b;
    b = c;
    printf("\nThe swapped First number is: %d", a);
    printf("\nThe swapped Second number is: %d", b);
    
    return 0;
}
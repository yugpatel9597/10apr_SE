/*
    & - Bitwise And
    | - Bitwise Or
    ^ - Bitwise XOR(exclusive or)
    << - Bitwise Shift left
    >> - Bitwise shift right
    ~ - Bitwise compliment

*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of the a and b:");
    scanf("%d%d",&a, &b);
    printf("\nbitwise and of a and b is:%d", a&b);
    printf("\nBitwise or of a and b is:%d", a|b);
    printf("\nBitwise XOR of the a and b is:%d", a^b);
    printf("\nBitwise shift left of the a is:%d", a<<1);
    printf("\nBitwise shift right of b is:%d", b>>1);
    printf("\nBitwise compliment of a is:%d", ~a);
}
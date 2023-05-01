// Switch Case is use to take choice from the user
// WAP to demonstrate calculator
#include<stdio.h>
int main()
{
    char expression;
    int a,b;
    // int ans;

    // Give the user choice
    printf("\n---------------------Menu-------------------\n");
    printf("\n1.Addition('+')\n2.Division('/')\n3.Subtraction('-')\n4.Multiplication('*')\n");

    // Take the user's choice.
    printf("\nEnter your choice:");

    printf("Enter the value of a and b:");
    scanf("%d%c%d", &a,&expression, &b);
    switch(expression)
    {
        case '+':
            a+=b; // a = a + b
            printf("\nAddition of the and b is:%d", a);
            break;
        case '-':
            a -= b;
            printf("\nSubtraction of the a and b is:%d", a);
            break;
        case '*':
            a *= b;
            printf("\nMultiplication of the a and b is:%d", a);
            break;
        case '/':
            a /= b;
            printf("\nDivision of a and b is:%d", a);
            break;
        default:
            printf("\nEnter valid choice...........");
            break;
    }
    return 0;
}
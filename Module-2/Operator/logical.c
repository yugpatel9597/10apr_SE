//WAP demonstrate logical operator
/*
    && - Logical AND
    || - Logical OR
    ! -  Logical NOT
*/
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    //Use the relational operator
    if(!(a>0 || b<0))
    {
        printf("True");
    }
    else{
        printf("False");
    };
}
/*
    a = -9;  b = 9
*/
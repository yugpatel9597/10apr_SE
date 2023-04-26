// Relational operator
/*
    <, >, <=, >=, ==, !=
*/
#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter the value:\na:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);

    if (a > b)
    {
        printf("\nTrue");
    }
    else{
        printf("\nfalse");
    }
    
    return 0;
}
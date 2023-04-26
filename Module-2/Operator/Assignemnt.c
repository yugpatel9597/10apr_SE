//WAP to demonstrate the assignment operator
/*
a = 7; b = 3; 
    a+=b -> a = a + b -> a = 7 + 3 -> a = 10;  
    a-=b -> a = a - b -> a = 7 - 3 -> a = 4;  
    a*=b -> a = a * b -> a = 7 * 3 -> a = 21;  
    a/=b -> a = a / b -> a = 7 / 3 -> a = 2.3;  
*/
#include<stdio.h>
int  main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    /*
        a+=b;
        printf("\nAddition of a and b is:%d", a);
    */
    // ------------------------
    /*
        a -= b;
        printf("\nSubtraction of the a anb b is:%d", a);
    */
    //-------------------------------------
    /*
        a *= b;
        printf("\nMultiplication of the a nad b is:%d", a);
    */
    //-------------------------------------
    /*
        a/=b;
        printf("\nDivision of the a and b is:%d", a);
    */

    return 0;
}
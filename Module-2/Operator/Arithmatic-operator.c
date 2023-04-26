// WAP to calculate the arithmetic operator
/*
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    % -> Modulo (return the reminder)
    ++ -> Increment by 1
        for ex. no = 5;
            ->no++ ->no = no + 1 -> no = 6; 
            ->++no ->no = no + 1 -> no = 6; 
    -- -> Decrement by 1
            for ex. no = 5;
                ->no-- ->no = no - 1 -> no = 4; 
                ->--no ->no = no - 1 -> no = 4; 

*/

#include<stdio.h>
int main()
{
    int a, b;
    char x = 'a', y = 'b';
    float ans;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);

    // implicited type conversion
    printf("\nAddition of the a and b is:%d", x+y);

    // Explicated type conversion
    // ans = (float)a/ (float)b;
    ans = a / b;
    printf("\nDivision of the a and b is:%f", (float)a/ (float)b);
    printf("\nModulo of the a nd b is:%d", a%b);

    a++;
    printf("\nIncrement of the a is:%d", a);

    --b;
    printf("\nAfter decrement value of the b is:%d",b);
    return 0;
}

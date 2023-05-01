// If-Else is use to give the user choice
// WAP to demonstrate user is eligible for vote or not
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your current year age:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible for vote");
    }
    else{
        printf("You are not eligible for vote");
    }
    return 0;
}
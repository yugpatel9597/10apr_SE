#include<stdio.h>
int no;  //Global variable
int main()
{
    // int no = 10; //Local variable //Static value
    printf("Enter the no:");
    scanf("%d", &no);      //Take the input from the user
    printf("Value of no is:%d", no);
    return 0;
}
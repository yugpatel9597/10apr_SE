// Pointer is use to store a addressof the other variable 
#include<stdio.h>
int main()
{
    int a = 100; 
    int *ptr;
    ptr = &a;
    printf("\nAddress of the a is:%d", ptr);
    /*
    // Increase the address of the a
        ++ptr;
        printf("\nAfter increment the address is:%d", ptr);
    */
    // print the value of the a using pointer
    printf("\nValue of the a is:%d", *ptr);
    // Change the value of a using pointer (pointer of te pointer)
    *ptr = 13; 
    printf("\nAfter change value of a is:%d", a);
    return 0;
}
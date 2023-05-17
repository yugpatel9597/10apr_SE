// With return type with parameter
#include<stdio.h>
int* point(int *ptr) // call by reference
{
    return ptr;
}
int main()
{
    int no = 100;
    printf("%d",point(&no));
    return 0;
}

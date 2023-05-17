// Without return type With parameter
#include<stdio.h>
void data(int a, int b) // Call by value
{
    printf("Value of a is: %d", a);
    printf("\nValue of the b is: %d", b);

}
int main()
{
    // data(12, 85);
    int a, b;
    printf("Enter the value of the a: ");
    scanf("%d", &a);
    printf("Enter the  value of b: ");
    scanf("%d", &b);
    data(a, b);
}


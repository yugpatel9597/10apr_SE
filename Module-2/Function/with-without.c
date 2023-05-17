// With return type Without perametr
#include<stdio.h>
int a;
int getdata()
{
    printf("Enter the  value of a: ");
    scanf("%d", &a);
    return 0;
}
int showdata()
{
    return a; //return the value of the a
}

int main()
{
    getdata();
    printf("%d",showdata());
}

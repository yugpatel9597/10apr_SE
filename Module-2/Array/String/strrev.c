// strrev() is return the reverse string 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string : ");
    scanf("%s", &str);
    strrev(str);
    printf("Reversed string is : %s", str);
    return 0;
}

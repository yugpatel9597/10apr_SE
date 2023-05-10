// Strlen() is use to count the length of the string
// Every string() from the string.h
// strlen() is a macro, it return the length of the string
// strlen() is a function
#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char str[20];
    printf("Enter the value of string:");
    scanf("%s", &str);
    len = strlen(str);
    printf("\nLength of the string is:%d", len);
    return 0;
}

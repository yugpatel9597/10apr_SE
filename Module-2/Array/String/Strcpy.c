// strcpy() is macro, is return the copy of the other string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter the first string : ");
    gets(str1);
    strcpy(str2, str1);
    printf("The copied string is : %s", str2);
    // puts(str2);
    return 0;
}
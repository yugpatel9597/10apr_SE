// strcmp() it return the comparision of the two string
#include<string.h>
#include<stdio.h>
int main()
{
    int cmp;
    char s1[20], s2[20];
    printf("Enter the first string : ");
    scanf("%s", &s1);
    printf("Enter the second string : ");
    scanf("%s", &s2);
    cmp = strcmp(s1, s2);
    // printf("After comparision max string is: %d", cmp);
    if (cmp > 0)
    {
        printf("\n1st string is max.");
    }
    else if (cmp < 0)
    {
        printf("\n2nd string is max.");
    }
    else
    {
        printf("\nBoth string are equal");
    }
    
    return 0;
}

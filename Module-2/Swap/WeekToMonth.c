// WAP take the  no of week and convert it into months
#include<stdio.h>
int main()
{
    int nom;
    int now;
    printf("Enter the no of week:");
    scanf("%d",&now);
    nom=now/4;
    printf("\nNo of month is:%d", nom);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str1[20]= {"Hello"}, str2[20]; 
    fptr = fopen("hello.txt", "a");
    fprintf(fptr, "Nidhi");
    fclose(fptr);
    fptr = fopen("hello.txt", "r");
    fscanf(fptr, "%s", &str2);
    printf("%s", str2);
    return 0;
}
/*
    1*1=1
    1*2=2
    1*3=3
    1*4=4
    1*5=5
    1*6=6
    1*7=7
    1*8=8
    1*9=9
    1*10=10
*/
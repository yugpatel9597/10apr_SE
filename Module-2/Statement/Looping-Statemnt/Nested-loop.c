// Nested is used when arrange the data into tabular formate(multiple row and multiple column)
/*
    WAP to print pyramid
    1
    22
    333
    4444
    55555
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++) //Outer loop is work for the row
    {
        for(j = 1; j <= i; j++) //Inner loop is work for the column 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*

          1
         1 2 1
       1 2 3 2 1
      1 2 3 4 3 2 1
     1 2 3 4 5 3 2 1

*/
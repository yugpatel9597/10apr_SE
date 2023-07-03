#include<stdio.h>
int main()
{   
    int arr[3][3];
    int max = -1;
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {    
            scanf("%d",&arr[i][j]);
       }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {   
            printf("%d",arr[i][j]);
        }printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {   
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
            
        }
    }
    printf("%d",max);
}

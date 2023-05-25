#include<stdio.h>
union student{
    int id;
    char name[20];
};
int main(int argc, char const *argv[])
{
    /* code */
    union student stud[5];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter your name:");
        scanf("%s", &stud[i].name);
        printf("Enter your id:");
        scanf("%d",&stud[i].id);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%s your id is: %d", stud[i].name, stud[i].id);
    }
    
    return 0;
}

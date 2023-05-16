// Without return type and Without parameter
#include<stdio.h>
// Global Section
int x;  //global variable
void getdata()// UserDefine function
{
    printf("Entre the value of the x: ");
    scanf("%d",&x);
}
void showdata()
{
    printf("Value of the x is: %d", x);
}
int main(){
    
    getdata();
    showdata();
}
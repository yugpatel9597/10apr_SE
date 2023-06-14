#include<iostream>
using namespace std;
class Base{
public:
    Base(int no)
    {
        cout<<"Value of no is: "<<no<<endl;
    }
};
class Derived : public Base{
public:
    Derived(int n):Base(n){
        cout<<"Derived Constructor"<<endl;
    }
};
int main()
{
    Derived d1(50);
    return 0;
}
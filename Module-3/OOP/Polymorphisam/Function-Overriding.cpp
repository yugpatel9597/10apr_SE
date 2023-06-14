#include<iostream>
using namespace std;
class A{
public:
    int div(int a, int b)
    {
        return a/b;
    }
};
class B{
public:
    float div(float a, float b)
    {
        return a/b;
    }
};
int main()
{
    A a;
    B b;
    cout<< endl<<a.div(45, 2);
    cout<< endl<<b.div(45, 2);
    return 0;
}
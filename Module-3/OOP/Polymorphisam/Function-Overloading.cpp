#include<iostream>
using namespace std;
class Overloading{
public:
    int add(int a, int b){ return a+b; }
    int add(int a, int b, int c)  { return a+b+c; }
};
int main()
{
    Overloading over;
    cout<<endl<<over.add(20, 10);
    cout<<endl<<over.add(10,20,30);
    return 0;
}
#include<iostream>
using namespace std;
class A
{
public:
    int ano;
    int aget()
    {
        cout<<"Enter the value of a no: ";
        cin>>ano;
        return 0;
    }
};
class B : public A
{
public: 
    int bno;
    int bget()
    {
        cout<<"Enter the bno: ";
        cin>>bno;
        return 0;
    }
};
class C : public B
{
public:     
    int display()
    {
        cout<<"\nThe values are:\nano = "<<ano<<endl<<"\nbno = " <<bno;
        return 0;
    }
};
int main()
{
    C c1;
    c1.aget();
    c1.bget();
    c1.display();
    return 0;
}
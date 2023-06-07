#include<iostream>
using namespace std;
class FriendDemo{
    int no;
public:
    friend class demo;
};
class demo{
public:
int n;
    demo()
    {
        cout<<"Enter the value of n: ";
        cin>>n;
    }
    void display(FriendDemo &fd)
    {
        fd.no = n;
        cout<<"Value of no is: "<<fd.no;
    }
};
int main()
{
    FriendDemo f1;
    demo d1;
    d1.display(f1);
    return 0;
}
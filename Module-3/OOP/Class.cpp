#include<iostream>
using namespace std;
class Demo
{
public:
    int id;
    string name;
    int getdata(){
        cout<<"Enter id : ";
        cin>> id;
        cout<<"Enter name: ";
        cin>>name;
        return 0;
    }
    int showdata()
    {
        cout<<name<<" your id is: "<< id;
        return 0;
    }
}d1;
int main()
{
    // Demo d1;
    d1.getdata();
    d1.showdata();
    return 0;
}
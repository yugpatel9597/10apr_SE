#include<iostream>
using namespace std;
class Grand{
public:
    int noh;
    Grand()
    {
        cout<<"Enter the no of house:";
        cin>>noh;
    }
};
class Parent : public Grand{
public:
    int bal;
    Parent()
    {
        cout<<"Enter the total bank balance: ";
        cin>>bal;
    }
};
class Child : public Parent{
public:
    int noc;
    Child(){
        cout<<"Enter the no of cars: ";
        cin>>noc;
    }
    void display(){
        cout<<"\nTotal no of house is: "<<noh<<endl;
        cout<<"Total bank balance is: "<<bal<<endl;
        cout<<"Total no of cars is: "<<noc;
    }
};
int main(){
    Child c1;
    // c1.gget();
    // c1.pget();
    // c1.cget();
    c1.display();
    return 0;
}
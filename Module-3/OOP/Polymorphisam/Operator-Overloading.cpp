#include<iostream>
using namespace std;
class Operator{
public:
    int no;
    void get()
    {
        cout<<"Enter the value of the no: ";
        cin>>no;
    }
    /*Operator operator ++()
    {
        no++;
    }*/
    Operator operator %(Operator &op2)
    {
        Operator op3;
        op3.no = no % op2.no;
        return op3;
    }
    void display()
    {
        cout<<"value of no is: "<<no<<endl;
    }
};
int main()
{
    Operator obj, obj2;
    obj.get();
    obj2.get();
    // ++obj;
    Operator obj3;
    obj3 = obj % obj2;
    obj3.display();
    return 0;
}
#include<iostream>
using namespace std;
class Parametrize
{
public:
    Parametrize(int no)
    {
        cout<<"Value of the no is: "<<no;
    }
};
int main()
{
    int no;
    cout<<"Enter the value of the no: ";
    cin>>no;
    Parametrize obj(no);
    return 0;
}
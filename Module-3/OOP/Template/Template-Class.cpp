#include<iostream>
using namespace std;
template <class x>
class Template
{
public:
    x div(x a, x b)
    {        
        return a/b;
    }
};
int main()
{
    Template <int> obj;
    Template <float> obj2;
    cout<<endl<<obj.div(59, 2);
    cout<<endl<<obj2.div(59, 2);
    return 0;
}
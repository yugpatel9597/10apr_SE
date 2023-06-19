#include<iostream>
using namespace std; 
template <typename t>
t data(t a, t b)
{
    return a/b;
}
int main()
{
    cout<<endl<<data <int> (58, 3);
    cout<<endl<<data <float> (12, 5);
    return 0;
}
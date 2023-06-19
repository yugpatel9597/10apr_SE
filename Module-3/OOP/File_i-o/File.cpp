#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string data, data2;
    cout<<"Enter your string:";
    cin>>data2;
    ofstream out;
    out.open("temp.txt");
    out<<data2;
    out.close();
    ifstream in("temp.txt");
    in>>data;
    cout<<data;
    return 0;
}
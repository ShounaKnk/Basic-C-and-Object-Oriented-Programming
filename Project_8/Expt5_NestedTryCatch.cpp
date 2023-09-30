#include<iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 10;
        }
        catch(int a)
        {
            cout<<"\ncatch inside try\n";
            cout<<"exception caught: "<<a<<endl;
            throw 20;
        }
    }
    catch(int b)
    {
        cout<<"\nexception caught outside try\n";
        cout<<"exception caught: "<<b<<endl;
    }
}
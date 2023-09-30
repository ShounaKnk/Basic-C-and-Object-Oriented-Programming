#include<iostream>
#include<stdlib.h>
using namespace std;
void test (int x)
{
    try
    {
        if (x==1)
        {
            throw x;
        }

        if (x==0)
        {
            throw 'x';
        }

        if (x== -1)
        {
            throw 1.0;
        }
    }
    catch (...)
    {
        cout << "Catch All block Executed\nexception caught\n\n";
    }
    cout<<"out of try-catch system\n";
}

int main()
{
    cout<<"testing catch alln";
    cout<<"\nx = 1\n";
    test(1);
    cout<<"\nx = 0\n";
    test(0);
    cout<<"\nx = -1\n";
    test(-1);
}
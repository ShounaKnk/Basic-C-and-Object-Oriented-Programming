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
        cout << "Catch All block Executed\nexception caught\n";
    }
    cout<<"out of try-catch system\n";
}

int main()
{
    cout<<"testing catch all\n";
    cout<<"\nint type thrown\n";
    test(1);
    cout<<"\nchar type was thrown\n";
    test(0);
    cout<<"\nfloat type was thrown\n";
    test(-1);
}
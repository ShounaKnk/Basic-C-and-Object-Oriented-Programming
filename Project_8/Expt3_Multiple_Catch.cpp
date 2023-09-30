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
    
    catch (int a)
    {
        cout<<"caught a integer\n";
    }
    catch (char b)
    {
        cout<<"caught a character\n";
    }
    catch (double c)
    {
        cout<<"caught a double\n";
    }
    cout<<"out of try-catch system\n";
}
    
int main()
{
    cout<<"testing multiple catches\n";
    cout<<"\nx = 1\n";
    test(1);
    cout<<"\nx = 0\n";
    test(0);
    cout<<"\nx = -1\n";
    test(-1);
    cout<<"\nx = 2\n";
    test(2);
}
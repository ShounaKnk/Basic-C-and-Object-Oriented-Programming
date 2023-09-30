#include <iostream>
using namespace std;
int getnum()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    try
    {
        if(a<1 || a>99)
        {throw a;}
    }
    catch(int y)
    {
        cout<<"\nnumber out of range\n";
        return 1;
    }
    cout<<"number entered: "<<a<<endl;
}
int main()
{
    int x = getnum();
    return 0;
}
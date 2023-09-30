#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a[10], n, i=0;
    cout<<"enter the number of element: ";
    cin>>n;
    try
    {
        if(n > 10)
        throw n;
    }
    catch(int c)
    {
        cout<<"\n\narray index out of bound\n";
        return 0;
    }
    cout<<"enter the elements of array\n";
    for(i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

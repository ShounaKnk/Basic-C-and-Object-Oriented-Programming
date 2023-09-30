#include<iostream>
#include<stdlib.h>
using namespace std;
int test(float num, float denom)
{
    float ans;
    try
    {
        if(denom == 0)
        {
            throw denom;
        }
        else
        {
            ans = num/denom;
            cout<<"\nAnswer: "<<ans<<endl;
            return 1;
        }
    }
    catch(float d)
    {
        cout<<"\nexception caught\n";
        return 1;
    }
}
int main()
{
    float n, d;
    cout<<"numerator: ";
    cin>>n;
    cout<<"denominator: ";
    cin>>d;
    int x = test(n, d);
    return 0;
}
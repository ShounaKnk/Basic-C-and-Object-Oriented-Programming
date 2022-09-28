#include <iostream>
using namespace std;
class fraction
{
    public:
    int num, denom;
    void dispFraction()
    {
        cout<<"fraction: "<<num<<"/"<<denom<<endl;
    }
};
int main()
{
    fraction f;
    cout<<"enter the numerator: ";
    cin>>f.num;
    cout<<"enter the denominator: ";
    cin>>f.denom;
    f.dispFraction();
    return 0;
}
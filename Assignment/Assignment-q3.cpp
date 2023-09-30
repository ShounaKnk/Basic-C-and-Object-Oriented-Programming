#include <iostream>
using namespace std;
int main()
{
    cout<<"\n\n************************\n";
    cout.fill('#');
    cout.precision(4);
    cout.setf(ios:: showpos);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(5);
    cout<<1;
        
    cout.setf(ios:: right, ios:: adjustfield);
    cout.width(12);
    cout<<1.;
    cout<<"\n\n************************\n";

    return 0;
}
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    cout<<"\n\nenter string A: ";
    getline(cin, a);
    string b;

    cout<<"\nenteer string B: ";
    getline(cin, b);

    a = a+b;
    cout<<"\nconcatenation string: "<<a<<endl;
    cout<<"\n\n";
    
    return 0;
}

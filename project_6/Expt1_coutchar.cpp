#include <iostream>
#include<string>
using namespace std;
int main()
{
    int i=0, newline= 0, whitespace= 0, tabs= 0;
    string a;
    cout<<"\n\nenter a string:"<<endl;
    getline(cin, a, '.');

    for(i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            whitespace++;
        }
        if (a[i] == '\t')
        {
            tabs++;
        }
        if (a[i] == '\n')
        {
            newline++;
        }
    }
    cout<<"\n\nspaces: "<<whitespace<<endl;
    cout<<"tabs: "<<tabs<<endl;
    cout<<"newline: "<<newline<<endl;
    cout<<"\n\n";
    return 0;
}
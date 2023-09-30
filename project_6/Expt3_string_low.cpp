#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "\n\nEnter your name : ";
    getline(cin, name);
    for(int i=0; i<name.length(); i++)
        name[i] = toupper(name[i]);
    cout << "\n\nName in Uppercase : " << name << endl;
    for(int i=0; i<name.length(); i++)
        name[i] = tolower(name[i]);
    cout << "\nName in Lowercase : " << name << endl;
    cout<<"\n\n";
    return 0;
}
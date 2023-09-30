#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    int pos;
    cout << "\n\nEnter some text : ";
    getline(cin, text);
    cout << "\nEnter the position you want to split the string at : ";
    cin >> pos;
    string leftSubText = text.substr(0, pos);
    string rightSubText = text.substr(pos, text.length()-pos);
    cout << "\n\nLeft sub-string : " << leftSubText << endl;
    cout << "\nRight sub-string : " << rightSubText << endl;
    cout<<"\n\n";
 return 0;
}
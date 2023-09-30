#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text, word;
    cout << "\n\nEnter some text : ";
    getline(cin, text);
    cout << "\nEnter word to be searched : ";
    getline(cin, word);
    int pos = text.find(word);
    cout << "\nWord Found at location : " << pos+1;
    cout<<"\n\n";
    return 0;
}
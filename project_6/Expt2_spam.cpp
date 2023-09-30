#include <iostream>
#include <string>
using namespace std;
int check_no_of_spam_words(string spam, string text)
{
    int count = 0, index = -1;
    while(1)
    {
        index = text.find(spam, index+1);
        if(index ==-1)
            break;
        else 
            count ++;
    }
    return count;
}
int main()
{
    string spam[10] = {"to", "play", "happy"};
    string text;
    int count = 0;
    cout << "\n\nEnter your text : ";
    getline(cin, text);
    for(int i=0; i<2; i++)
    {
        count += check_no_of_spam_words(spam[i], text);
    }
    cout << "\nNo of spam words : " << count;
    cout<<"\n\n";
}
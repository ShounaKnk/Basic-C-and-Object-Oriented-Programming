/*===============================
Lab ID: 4.6
Title: Constructors & Destructors
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description: Write a program demonstrating use of destructrors.
Input:
Output:
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
using namespace std;
class Number
{
    int num;
    public:
    Number(int n)
    {
        num = n;
    }
    void display()
    {
        cout << "Number: " << num<<endl;
    }
    ~Number()
    {
        cout<<"\nObject Destroyed\n"<<endl;
    }
};
int main()
{
    Number a(5);
    a.display();
    return 0;
}
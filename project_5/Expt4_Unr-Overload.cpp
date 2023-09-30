/*===============================
Lab ID: 5.3
Title: Operator Overloading
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description: Write a program to overload unary minus operator using member function
Input:a Number
Output: Negative of the number
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
using namespace std;
class Number
{
    private:
    int num;
    public:
    Number(int num = 0)
    {
        this->num = num;
    }
    void operator -()
    {
        num = -num;
    }
    void display()
    {
        cout << num << endl;
    }
};
int main()
{
    Number n1(3);
    cout << "\n\nBefore Using Unary operator\n";
    cout << "num : ";
    n1.display();
    -n1;
    cout << "After Using Unary operator\n";
    cout << "num : ";
    n1.display();
    cout<<"\n\n";
    return 0;
}

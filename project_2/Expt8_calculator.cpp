/*===============================
Lab ID: 2.8
Title: Classes and Objects
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description: Create a class called
‘calculator’ which implements basic arithmetic operations.
Input: equation
Output: result of the equation
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include<iostream>
using namespace std;
class calculator
{
    float a, b, ans;

    public:
    void seta(float A)
    {
        a = A;
    }
    void setb(float B)
    {
        b = B;
    }
    float geta()
    {
        return a;
    }
    float getb()
    {
        return b;
    }
    void addition()
    {
        ans = a+b;
    }
    void subtract()
    {
        ans = a-b;
    }
    void multiply()
    {
        ans = a*b;
    }
    void divide ()
    {
        ans = a/b;
    }
    void display()
    {
        cout<<"\n\nNum1: "<<a<<endl;
        cout<<"Num2: "<<b<<endl;
        cout<<"Answer: "<<ans<<endl;
    }
};
int main()
{
    calculator calc;
    float num1, num2;
    char op;
    cout<<"\nEquation: ";
    cin>>num1>>op>>num2;
    calc.seta(num1);
    calc.setb(num2);
    switch (op)
    {
        case '+':
        calc.addition();
        break;

        case '-':
        calc.subtract();
        break;

        case '*':
        calc.multiply();
        break;

        case '/':
        calc.divide();
        break;
    }
    calc.display();
    return 0;
}
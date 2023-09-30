/*===============================
Lab ID: 5.1
Title: Operator Overloading
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Write a program to add two Complex
class objects using operator overloading concept. Overload Binary operator
Input:
Output:Complex number C1 C2 C3, Sum of the complex numbers
Algorithm:
Prerequisites
Known bugs:
=================================*/

#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    Complex operator + (const Complex &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    void display()
    {
        cout << real << " + " << imag << "i\n";
    }
};
int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;
    cout << "\n\nc1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "Result = "; c3.display();
    cout<<"\n\n";
    return 0;
}

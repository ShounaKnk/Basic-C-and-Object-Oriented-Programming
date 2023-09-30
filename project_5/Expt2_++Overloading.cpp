/*===============================
Lab ID: 5.2
Title: Operator Overloading
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Write a program to add two �eComplex�f
class objects using operator overloading concept. Overload Binary operator�e++�f
Input:
Output: Complex number C1 C2 C3, Sum of the complex numbers
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include<iostream>
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
    void operator ++()
    {
        ++real;
        ++imag;
    }
    void operator ++(int)
    {
        real++;
        imag++;
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
    cout << "\n\nBefore Incrementation\n";
    cout << "c1 : ";
    c1.display();
    cout << "c2 : ";
    c2.display();
    cout << "\nAfter Incrementation\n";
    ++c1;
    c2++;
    cout << "c1 : ";
    c1.display();
    cout << "c2 : ";
    c2.display();
    cout<<"\n\n";
    return 0;
}
/*===============================
Lab ID: 5.5
Title: Operator Overloading
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Write a program to add two �eComplex�f class objects
using operator overloading concept. Overload Binary operator �e-�f
Input:
Output:Complex number C1 C2 C3, Difference of the complex numbers
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
using namespace std;
class Complex
{
    private:
    int real, imag;
    public:
    Complex ()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print(int n)
    {
        cout<<"number"<<n<<": ";
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    void printS()
    {
        cout<<"Difference: ";
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    Complex operator -(Complex C)
    {
        Complex temp;
        temp.real = real - C.real;
        temp.imag = imag - C.imag;
        return temp;
    }
};
int main()
{
    Complex c1(15,18);
    c1.print(1);
    cout<<"\n";
    Complex c2(5,8);
    c2.print(2);
    cout<<"\n";
    Complex c3(9,3);
    c3.print(3);
    cout<<"\n";
    Complex c4;
    c4 = c1-c2-c3;
    c4.printS();
    return 0;
}

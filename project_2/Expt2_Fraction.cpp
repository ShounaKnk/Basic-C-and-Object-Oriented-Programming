/*===============================
Lab ID: 2.2
Title: Classes and Objects
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Write a program to implement a
class called Fraction. It should contain an integer data members num,denom and
include member functions to initialize to display the fraction.
Input: Numerator, denominator
Output: Fraction
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
using namespace std;
class fraction
{
    public:
    int num, denom;
    void dispFraction()
    {
        cout<<"\nfraction: "<<num<<"/"<<denom<<endl;
    }
};
int main()
{
    fraction f;
    cout<<"enter the numerator: ";
    cin>>f.num;
    cout<<"enter the denominator: ";
    cin>>f.denom;
    f.dispFraction();
    return 0;
}

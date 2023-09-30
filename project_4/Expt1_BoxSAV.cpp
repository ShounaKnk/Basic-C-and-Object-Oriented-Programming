/*===============================
Lab ID: 4.1
Title: Constructors & Destructors
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Write a program to implement a class  ‘Box’ with data members (Length,Breadth,Height).
Include different constructors to initialize data members and also include members functions to
compute surface area and volume of each box objects
Input: Length, Breadth and Height
Output: surface area and volume of three objects
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include<iostream>
using namespace std;
class Box
{
    float Length, Breadth, Height, SA, volume;

    public:
    Box ()
    {
        Length = 10;
        Breadth = 5;
        Height = 7.5;
    }
    Box(float l, float b, float h)
    {
        Length = l;
        Breadth = b;
        Height = h;
    }
    Box(Box &b)
    {
        Length = b.Length;
        Breadth = b.Breadth;
        Height = b.Height;
    }
    void calc()
    {
        SA = 2*(Length*Breadth + Breadth*Height + Length*Height);
        volume = Length*Breadth*Height;
    }
    void display()
    {
        cout<<"Surface area of the box: "<<SA<<endl;
        cout<<"Volume of the box: "<<volume<<"\n"<<endl;
    }
};
int main ()
{
    Box b1, b2(10.4, 6.5, 9), b3(b2);
    b1.calc();
    b2.calc();
    b3.calc();
    cout<<"Output using default constructor:\n";
    b1.display();
    cout<<"Output using parametric constructor:\n";
    b2.display();
    cout<<"Output using copy constructor:\n";
    b3.display();
    return 0;
}
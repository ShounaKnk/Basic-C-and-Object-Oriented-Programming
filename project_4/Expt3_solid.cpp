/*===============================
Lab ID: 4.3
Title: Constructors & Destructors
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Write a program to implement a class  ‘Solid’ with data members (radius,Breadth,Height).
Include different constructors to initialize data members and also
include members functions to compute surface area and volume of each Solid objects
Input: radius, Breadth and Height
Output: surface area and volume of three objects
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include<iostream>
using namespace std;
class Solid
{
    float Height1, Height2, coneV, cylinV;

    public:
    Solid ()
    {
        Height1 = 7.5;
        Height2 = 5.1;
    }
    Solid(float h1, float h2)
    {
        Height1 = h1;
        Height2 = h2;
    }
    Solid(Solid &s)
    {
        Height1 = s.Height1;
        Height2 = s.Height2;

    }
    void calc(float radius = 4)
    {
        coneV =    3.14*radius*radius*(Height1/3);
        cylinV =    3.14*radius*radius*(Height2);
    }
    void display()
    {
        cout<<"volume of cone: "<<coneV<<endl;
        cout<<"Volume of cylinder: "<<cylinV<<"\n"<<endl;
    }
};
int main ()
{
    Solid s1, s2(9.6, 4.9), s3(s2);
    s1.calc();
    s2.calc();
    s3.calc();
    cout<<"Output using default constructor:\n";
    s1.display();
    cout<<"Output using parametric constructor:\n";
    s2.display();
    cout<<"Output using copy constructor:\n";
    s3.display();
    return 0;
}
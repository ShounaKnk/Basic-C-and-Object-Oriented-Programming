/*===============================
Lab ID: 2.6
Title: Classes and Objects
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description: Create a class called Box with
data member length, breadth and height. Use setter and getter functions and
display the volume and surface area of different box objects.
Input: total number of objects, length, breadth, height
Output: length, breadth, height, volume of all the objects
Algorithm:
Prerequisites
Known bugs:
=================================*/#include<iostream>
using namespace std;
class Box
{
    int length, breadth, height, volume;

    public:
    void setlength(int ln)
    {
        length = ln;
    }
    void setbreadth (int br)
    {
        breadth = br;
    }
    void setheight(int ht)
    {
        height = ht;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int getheight()
    {
        return height;
    }
    void calc()
    {
        volume = (length*breadth*height);
    }

    void display()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"\nVolume: "<<volume<<endl;
    }

};
int main ()
{
    Box object[10];
    int n, i, l, b, h;

    cout<<"enter the total number of objects: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nenter the length of object"<<i+1<<": ";
        cin>>l;
        cout<<"enter the breadth of object"<<i+1<<": ";
        cin>>b;
        cout<<"enter the height of object"<<i+1<<": ";
        cin>>h;
        cout<<endl;
        object[i].setlength(l);
        object[i].setbreadth(b);
        object[i].setheight(h);
        object[i].calc();
    }
    for(i=0; i<n; i++)
    {
        cout<<"*****Object "<<(i+1)<<"*****\n"<<endl;
        object[i].display();
        cout<<endl;
    }
}

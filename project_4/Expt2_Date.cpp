/*===============================
Lab ID: 4.2
Title: Constructors & Destructors
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Implement a C++   program to implement a
class called Number. It should contain an integer array and include member
functions to initialize the array,perform scalar operations and display the array.
Input: date in the format DD MM YYYY.
Output: date.
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include<iostream>
using namespace std;
class Date
{
    private:
    string date, month, year;

    public:
    Date()
    {
        date = {'0', '9'};
        month = {'1', '1'};
        year = {'2', '0', '2', '2'};
    }
    Date (string dd, string mm, string yyyy)
    {
        date = dd;
        month = mm;
        year = yyyy;
    }
    Date(Date &d)
    {
        date = d.date;
        month = d.month;
        year = d.year;
    }
    void display()
    {
        cout<<"Date: "<<date<<"-"<<month<<"-"<<year<<endl;
    }
};

int main ()
{
    Date D1;
    string d, m, y;
    cout<<"enter date in the format DD MM YYYY"<<endl;
    cin>>d>>m>>y;
    cout<<"\nDate using default constructor"<<endl;
    D1.display();
    Date D2(d, m, y);
    cout<<"\nDate using parametric constructor"<<endl;
    D2.display();
    Date D3(D2);
    cout<<"\nDate using copy constructor"<<endl;
    D3.display();
}

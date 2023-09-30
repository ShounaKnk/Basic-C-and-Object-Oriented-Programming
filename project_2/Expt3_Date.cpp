/*===============================
Lab ID: 2.3
Title: Classes and Objects
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
    int day, month, year;

    public:
    void input(int DD, int MM, int YYYY)
    {
        day = DD;
        month = MM;
        year = YYYY;
    }
    void display()
    {
        cout<<"\nDate: "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};
int main ()
{
    Date D1;
    int d, m, y;
    cout<<"enter date in the format DD MM YYYY"<<endl;
    cin>>d>>m>>y;
    D1.input(d, m, y);
    D1.display();
}

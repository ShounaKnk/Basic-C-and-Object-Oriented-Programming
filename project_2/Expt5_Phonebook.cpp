/*===============================
Lab ID: 2.5
Title: Classes and Objects
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description: Write a program to implement a
class called Phonebook. It should contain the contact name and contact number
and include member functions to initialize the data members. Use an array of object to display contact list.
Input: total number of entries, name, phone number
Output: name and phone number
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello World";
    return 0;
}
#include<iostream>
using namespace std;
class phonebook
{
    string name, number;

    public:
    void setname (string nm)
    {
        name = nm;
    }
    void setnumber(string nmbr)
    {
        number = nmbr;
    }
    string getname()
    {
        return name;
    }
    string getnumber()
    {
        return number;
    }

    void display ()
    {
        cout<<"\nname: "<<name<<endl;
        cout<<"number: "<<number<<endl;
    }
};

int main ()
{
    phonebook c[10];
    int n, i;
    string NAME, NUMBER;

    cout<<"enter the number of contacts to add"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\n\nenter the name: ";
        cin>>NAME;
        cout<<"enter contact number: ";
        cin >> NUMBER;
        c[i].setname(NAME);
        c[i].setnumber(NUMBER);
    }
    for(i=0; i<n; i++)
    {
        c[i].display();
        cout<<endl;
    }
}
/*===============================
Lab ID: 2.1
Title: Classes and Objects
Name: Shounak kannaik
Roll No.: 21co54
Language: C++
Due date:
=================================
Description:Implement a C++ program to implement a
class called Number. It should contain an integer array and include member
functions to initialize the array,perform scalar operations and display the array.
Input: an array of numbers
Output: the array values incremented by 3
Algorithm:
Prerequisites
Known bugs:
=================================*/
#include <iostream>
using namespace std;
class Number
{
    int arr[10];
    int n;
    public:
    void initarray()
    {
        int n;
        cout<<"enter the number of elements: ";
        cin>>this->n;
        cout<<"enter the elements of array"<<endl;
        for (int i = 0; i<this->n; i++)
        {
            cin>>arr[i];
        }
    }
    void addScalar(int x)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i]+= x;
        }
    }
    void displayArray()
    {
        cout<<"\n\narray:\t";
        for (int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Number n1;
    n1.initarray();
    n1.addScalar(3);
    n1.displayArray();
    return 0;
}

#include<iostream>
#include<string>
#include"Grade_Report.h"
using namespace grade_report;
using namespace std;
int main ()
{
    student s[10];
    report m[10];
    cout<<"enter the number of grade reports: ";
    int n;
    cin >>n;
    string stdname, brnh;
    int r, M1, M2, M3, i;
    for (i = 0; i<n; i++)
    {
        cout<<"enter the name of the student: ";
        cin>>stdname;
        cout<<"enter roll no: ";
        cin>>r;
        cout<<"enter the branch: ";
        cin>>brnh;
        s[i].setName(stdname);
        s[i].setroll_no(r);
        s[i].setBranch(brnh);
        cout<<"enter the marks of the student in subject 1: ";
        cin>>M1;
        cout<<"enter the marks of the student in subject 2: ";
        cin>>M2;
        cout<<"enter the marks of the student in subject 3: ";
        cin>>M3;
        m[i].setmk1(M1);
        m[i].setmk2(M2);
        m[i].setmk3(M3);
        cout<<"\n\n";
    }
    for (i = 0; i<n; i++)
    {
        cout<<"**********************Grade Report of Student "<<(i+1)<<"**********************\n\n";
        cout<<"student name: "<<s[i].getsName()<<endl;
        cout<<"Roll no: "<<s[i].getroll_no()<<endl;
        cout<<"Branch: "<<s[i].getbranch()<<endl;
        cout<<"Subjet 1 marks: "<<m[i].getmk1()<<endl;
        cout<<"Subjet 2 marks: "<<m[i].getmk2()<<endl;
        cout<<"Subjet 3 marks: "<<m[i].getmk3()<<endl;
        m[i].percent();
        m[i].grade();
        cout<<"fuck off";
    }
    return 0;
}


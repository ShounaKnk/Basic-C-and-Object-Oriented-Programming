#include <iostream>
using namespace std;
class student
{
    string rno;
    string sname;
    public:
    void setStudData()
    {
        cout << "Enter student name and rollno : ";
        cin >> sname >> rno;
    }
    void dispStud()
    {
        cout << "\nstud name : " << sname << endl;
        cout << "stud rollno : " << rno << endl;
    }
};
class sports
{
    int sportmks;
    public:
    void setSportsData()
    {
        cout << "Enter sports marks : ";
        cin >> sportmks;
    }
    int getSportMk()
    {
        return sportmks;
    }
    void dispSports()
    {
        cout << "sports marks : " << sportmks << endl;
    }
};
class Marks: public student 
{
    int mks1, mks2;
    public:
    void setMarks() 
    {
        cout << "Enter marks for subject 1 and subject 2 : ";
        cin >> mks1 >> mks2;
    }
    int getmk1() 
    {
        return mks1;
    }
    int getmk2() 
    {
        return mks2;
    }
    void dispMarks()
    {
        cout << "Subject 1 marks : " << mks1 << endl;
        cout << "Subject 2 marks : " << mks2 << endl;
    }
};
class Report: public Marks, public sports
{
    char grade;
    double per;
    public:
    void compute()
    {
        double sum = getmk1() + getmk2() + getSportMk();
        sum = sum / 300 * 100;
        per = sum;
        if (per >= 70) grade = 'A';
        else if (per >= 60 && per < 70) grade = 'B';
        else if (per >= 50 && per < 60) grade = 'C';
        else if (per >= 40 && per < 50) grade = 'D';
        else grade = 'F';
    }
    void dispReport()
    {
        dispStud();
        dispMarks();
        dispSports();
        cout << "percentage : " << per << endl;
        cout << "grade : " << grade << endl;
    }
};
int main()
{
    cout<<"\n\n";
    Report r;
    r.setStudData();
    r.setSportsData();
    r.setMarks();
    r.compute();
    r.dispReport();
    cout<<"\n\n";
    return 0;
}
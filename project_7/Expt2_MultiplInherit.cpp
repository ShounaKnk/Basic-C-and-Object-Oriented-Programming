#include <iostream>
#include <string>
using namespace std;
class Teacher
{
    protected:
    string tdept;
    string tname;
    void setTData()
    {
        cout << "Enter Teacher's name and department taught : ";
        cin.clear();
        cin >> tname >> tdept;
    }
    void dispTData()
    {
        cout << "Teacher's Name : " << tname << endl;
        cout << "dept : " << tdept << endl;
    }
};
class Student
{
    string sbranch;;
    string sname;
    public:
    void setSData()
    {
        cout << "Enter student's name and branch : ";
        cin.clear();
        cin >> sname >> sbranch;
    }
    void dispSData()
    {
        cout << "student name : " << sname << endl;
        cout << "student branch : " << sbranch << endl;
    }
};
class Teaching_Asst: protected Teacher, private Student
{
    public: 
    string course;
    string emp_type;

    void setTAData()
    {
        cout << "Enter the course being taught : ";
        getline(cin, course);
        cout << "Enter emp type as Teacher/student : ";
        getline(cin, emp_type);
        if (emp_type == "Teacher")
            setTData();
        else
            setSData();
    }
    void dispData()
    {
        if (emp_type == "Teacher")
            dispTData();
        else
            dispSData();
        cout << "course : " << course << endl;
    }
};
int main()
{
    Teaching_Asst t;
    cout<<"\n\n";
    t.setTAData();
    cout<<"\n";
    t.dispData();
    cout<<"\n\n";
    return 0;
    }
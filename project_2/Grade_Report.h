#include<string>
using namespace std;
namespace grade_report
{
    class student
    {
        int roll_no;
        string sName;
        string branch;

    public:
        void setroll_no (int roll)
        {
            roll_no = roll;
        }
        void setName(string name)
        {
            sName = name;
        }
        void setBranch(string bname)
        {
            branch = bname;
        }
        int getroll_no()
        {
            return roll_no;
        }
        string getsName()
        {
            return sName;
        }
        string getbranch ()
        {
            return branch;
        }
    };

    class report
    {
        int mk1, mk2, mk3;
        float sum, perc;
        string grd;

    public:
        void setmk1(int m1)
        {
            mk1 = m1;
        }
        void setmk2(int m2)
        {
            mk2 = m2;
        }
        void setmk3(int m3)
        {
            mk3 = m3;
        }
        void percent()
        {
            sum = mk1+mk2+mk3;
            perc = ((mk1+mk2+mk3)/300)*100;
            cout<<"percentage: "<<perc;
        }
        void grade()
        {
            if (perc > 90)
            {
                grd='A';
            }
            else if (perc>80 && perc <=89)
            {
                grd = 'B';
            }
            else if (perc>70 && perc <=79)
            {
                grd = 'C';
            }
            else if (perc>60 && perc <=69)
            {
                grd = 'D';
            }
            else
            {
                grd = 'F';
            }
            cout<<"grade: "<<grd;
        }
        int getmk1()
        {
            return mk1;
        }
        int getmk2()
        {
            return mk2;
        }
        int getmk3()
        {
            return mk3;
        }
    };
}

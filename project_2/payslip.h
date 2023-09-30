#include<iostream>
#include<string>
using namespace std;
namespace payslip
{
    class employee
    {
    private:
        int id;
        string name;
    public:
        void setid(int empid)
        {
            id=empid;
        }
        void setname(string Name)
        {
            name=Name;
        }
        int getid()
        {
            return id;
        }
        string getname()
        {
            return name;
        }
    };

    class payscale
    {
    private:
        string accno;
        float sal;
    public:
        void setaccno(string acc_no)
        {
            accno=acc_no;
        }
        void setsal(float basicsal)
        {
            sal=basicsal;
        }

        string getaccno()
        {
            return accno;
        }
        float getsal()
        {
            return sal;
        }

        float compute(float sal)
        {
            float gross_pay;
            gross_pay=(sal +((sal*15)/100)+((sal*5)/100));
            return gross_pay;
        }
    };
}

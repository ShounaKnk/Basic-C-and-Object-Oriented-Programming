#include <iostream>
using namespace std;
class Number
{
    private:
    int num;
    public:
    Number(int num = 0)
    {
    this->num = num;
    }
    int operator > (const Number &obj)
    {
        if(num > obj.num)
        return 1;

        else
        return 0;
    }
    int operator < (const Number &obj)
    {
        if(num < obj.num)
        return 1;

        else
        return 0;
    }
    int operator <= (const Number &obj)
    {
        if(num <= obj.num)
        return 1;

        else
        return 0;
    }
    int operator >= (const Number &obj)
    {
        if(num >= obj.num)
        return 1;

        else
        return 0;
    }
    int getnum()
    {
        return num;
    }
};
int main()
{
    Number n1(2), n2(3), n3(4), n4(3);
    cout << "\n\nn1 = " << n1.getnum() << endl;
    cout << "n2 = " << n2.getnum() << endl;
    cout << "n3 = " << n3.getnum() << endl;
    cout << "n4 = " << n4.getnum() << endl;
    cout<<"\n";
    if(n1 > n2)
        cout << "n1 is larger than n2" << endl;
    else
        cout << "n2 is larger than n1" << endl;
    if(n2 <= n4)
        cout << "n2 is less than or equal to n4" << endl;
    else
        cout << "n2 is equal to n4" << endl;
    cout<<"\n\n";
    return 0;
}
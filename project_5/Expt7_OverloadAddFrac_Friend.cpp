#include <iostream>
using namespace std;
int gcd(int a, int b);
class Fraction
{
    private:
    int num, den;
    public:
    Fraction(int num = 1, int den = 1)
    {
        this->num = num; this->den = den;
    }
    void display()
    {
        if(den == 1) {cout << num << endl;}
        else {cout << num << "/" << den << endl;}
    }
    friend Fraction operator + (Fraction &obj1, Fraction &obj2);
};
Fraction operator + (Fraction &obj1, Fraction &obj2)
{
    Fraction result;
    result.num = obj1.num * obj2.den + obj2.num * obj1.den;
    result.den = obj1.den * obj2.den;
    int divisor = gcd(result.num, result.den);
    result.num = result.num / divisor;
    result.den = result.den / divisor;
    return result;
}
int main()
{
    Fraction f1(1, 2), f2(7, 2), f3 = f1 + f2;
    cout << "\n\nf1 = "; f1.display();
    cout << "f2 = "; f2.display();
    cout << "Result : ";f3.display();
    cout<<"\n\n";
    return 0;
}
int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0) break;
        result--;
    }
    return result;
}
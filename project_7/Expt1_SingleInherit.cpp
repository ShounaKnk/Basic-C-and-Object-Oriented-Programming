#include <iostream>
using namespace std;
class A 
{
    int a;
    public:
    void setA(int a1) 
    {
        a = a1;
    }
    int getA()
    {
        return a;
    }
    void dispA() 
    {
        cout << "a=" << a << endl;
    }
};
class B: public A 
{
    int b;
    public:
    void setB(int b1) 
    {
        b = b1;
    }
    int getB()
    {
        return b;
    }
    void dispB()
    {
        cout << "b=" << b << endl;
    }
    void compute() 
    {
        cout << "sum of a+b=" << b + getA() << endl;
    }
};
int main()
{
    B obj;
    obj.setA(3);
    obj.setB(4);
    obj.dispA();
    obj.dispB();
    obj.compute();
    cout<<"\n\n";
    return 0;
}
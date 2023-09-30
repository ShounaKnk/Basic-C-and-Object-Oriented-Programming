#include <iostream>
using namespace std;
class Feet
{
    private:
    float feet;
    public:
    Feet(float feet = 0)
    {
        this->feet = feet;
    }
    float getfeet()
    {
        return feet;
    }
    void display()
    {
        cout << "Value in Feet = " << feet << endl;
    }
};
class Inch
{
    private:
    float inch;
    public:
    Inch(float inch = 0)
    {
        this->inch = inch;
    }
    void operator = (Feet &obj)
    {
        inch = obj.getfeet() * 12;
    }
    float getinch()
    {
        return inch;
    }
    void display()
    {
        cout << "Value in Inch = " << inch << endl;
    }
};
int main()
{
    Feet f(2);
    Inch i;
    i = f;
    cout<<"\n";
    f.display();
    i.display();
    cout<<"\n\n";
    return 0;
}
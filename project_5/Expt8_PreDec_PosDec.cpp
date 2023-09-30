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
    void display()
    {
    cout << num;
    }
    friend void operator -- (Number &obj);
    friend void operator -- (Number &obj, int);
};
void operator -- (Number &obj)
{
    --obj.num;
}
void operator -- (Number &obj, int)
{
    obj.num--; 
}
int main()
{
    Number n(5);
    cout << "\n\nBefore decrementation" << endl;
    cout << "n : ";
    n.display();
    --n;
    cout << "\nAfter pre-decrementation" << endl;
    cout << "n : ";
    n.display();
    n--;
    cout << "\nAfter post-decrementation" << endl;
    cout << "n : ";
    n.display();
    cout<<"\n\n";
    return 0;
}
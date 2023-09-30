#include <iostream>
using namespace std;
class Number
{
    private:
    int num;
    char x;
    public:
    
        friend void operator << (ostream &out, Number &obj);
        friend void operator >> (istream &in, Number &obj);
};
void operator << (ostream &out, Number &obj)
{
    out << obj.num;
}
void operator >> (istream &in, Number &obj)
{
    in >> obj.num;
}
int main()
{
    Number n1;
    cout << "\n\nEnter a value : ";
    cin >> n1;
    cout << "Displaying Object : ";
    cout << n1;
    cout<<"\n\n";
    return 0;
}
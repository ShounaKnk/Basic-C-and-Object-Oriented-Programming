#include <iostream>
using namespace std;
class HERBIVORE
{
    public:
    void display_herbivore()
    {
        cout << "I eat veg" << endl;
    }
};
class CARNIVORE
{
    public:
    void display_carnivore()
    {
        cout << "I eat non-veg" << endl;
    }
};
class OMNIVORE : public CARNIVORE, public HERBIVORE
{
    public:
    void display_omnivore()
    {
        display_herbivore();
        display_carnivore();
    }
};
int main()
{
    cout<<"\n\n";
    HERBIVORE h;
    cout << "Herbivore : ---------------------------------\n";
    h.display_herbivore();
    CARNIVORE c;
    cout << "\nCarnivore : ---------------------------------\n";
    c.display_carnivore();
    OMNIVORE o;
    cout << "\nOmnivore : ----------------------------------\n";
    o.display_omnivore();
    cout<<"\n\n";
    return 0;
}
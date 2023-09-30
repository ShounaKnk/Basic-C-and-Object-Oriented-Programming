// polymorphism on animal class
#include <iostream>
#include <string>
using namespace std;
// create generic animal class
class Animal
{
    protected:
    string name;
    string type;
    public:
    // virtual functions for speaking and eating
    virtual void eat()
    {
        cout <<"\n\n"<< name << " is eating";
    }
    virtual void speak()
    {
        cout <<"\n\n"<< name << " is speaking";
    };
};
// derive Cat class from Animal
class Cat: public Animal
{
    public:
    Cat()
    {
        cout << "enter name of cat: ";
        cin >> name;
        type = "cat";
    }
    void eat()
    {
        Animal::eat();
        cout << " fish.\n";
    }
    void speak()
    {
        Animal::speak();
        cout << " meow meow!\n\n";
    }
};
// derive Dog class from Animal
class Dog: public Animal
{
    public:
    Dog()
    {
        cout << "enter name of dog: ";
        cin >> name;
        type = "dog";
    }
    void eat()
    {
        Animal::eat();
        cout << " meat.\n";
    }
    void speak()
    {
        Animal::speak();
        cout << " woof woof!\n\n";
    }
};
int main()
{
    // create Cat and Dog objects, and call their functions
    Cat c;
    Dog d;
    c.eat();
    d.eat();
    c.speak();
    d.speak();
    return 0;
}
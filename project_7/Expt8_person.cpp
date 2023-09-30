#include <iostream>
#include <string>
using namespace std;
class PERSON
{
    // protected:
    int age;
    float height;
    string name;
    public:
    void set_data()
    {
        cout << "Enter your name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter your age : ";
        cin >> age;
        cout << "Enter your height : ";
        cin >> height;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Height : " << height << endl;
    }
};
class DOCTOR : public PERSON
{
    protected:
    string type_of_doctor;
    public:
    void set_data_doctor()
    {
        set_data();
        cout << "Enter what type of doctor your are : ";
        cin.ignore();
        getline(cin, type_of_doctor);
    }
    void display_doctor()
    {
        display();
        cout << "I am a " << type_of_doctor << " Doctor" << endl;
    }
};
class ENGINEER : public PERSON
{
    protected:
    string type_of_engineer;
    public:
    void set_data_engineer()
    {
        set_data();
        cout << "Enter what type of engineer your are : ";
        cin.ignore();
        getline(cin, type_of_engineer);
    }
    void display_engineer()
    {
        display();
        cout << "I am a " << type_of_engineer << " Engineer" << endl;
    }
};
class ARTIST : public PERSON
{
    protected:
    string type_of_artist;
    public:
    void set_data_artist()
    {
        set_data();
        cout << "Enter what type of artist you are : ";
        cin.ignore();
        getline(cin, type_of_artist);
    }
    void display_artist()
    {
        display();
        cout << "I am a " << type_of_artist << " Artist" << endl;
    }
};
class SPECIALIST_DOCTOR : public DOCTOR
{
    protected:
    string special_type_of_doctor;
    public:
    void set_special_data_doctor()
    {
        set_data_doctor();
        cout << "Enter what did you specialize in? : ";
        cin.ignore();
        getline(cin, special_type_of_doctor);
    }
    void display_special_doctor()
    {
        display_doctor();
        cout << "I am a " << special_type_of_doctor << " Doctor" << endl;
    }
};
int main()
{
    cout<<"\n\n";
    DOCTOR d;
    cout << "Doctor ---------------------------------------\n";
    d.set_data_doctor(); d.display_doctor();
    ENGINEER e;
    cout << "\nengineer ---------------------------------------\n";
    e.set_data_engineer(); e.display_engineer();
    ARTIST a;
    cout << "\nartist ---------------------------------------\n";
    a.set_data_artist(); a.display_artist();
    SPECIALIST_DOCTOR sd;
    cout << "\nSpecial Doctor ---------------------------------------\n";
    sd.set_special_data_doctor(); sd.display_doctor();
    cout<<"\n\n";
    return 0;
}
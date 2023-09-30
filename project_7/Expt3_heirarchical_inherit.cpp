#include <iostream>
#include <string>
using namespace std;
class vehichle
{
    protected:
    string vbrand;
    string vcolor;
    void setVData()
    {
        cout << "\nEnter Vehicle brand and color : ";
        cin.clear();
        cin >> vbrand >> vcolor;
    }
    void dispVData() 
    {
        cout << "\nVehicle brand : " << vbrand << endl;
        cout << "Vehicle color : " << vcolor << endl;
    }
};
class FourWheeler: public vehichle
{
    string vtype;
    string vname;
    public:
    void setFWData()
    {
        setVData();
        cout << "Enter Vehicle type and name : ";
        cin >> vtype >> vname;
    }
    void dispFWData()
    {
        dispVData();
        cout << "vehichle type : " << vtype << endl;
        cout << "Vehicle name : " << vname << endl;
    }
};
class TwoWheeler: protected vehichle 
{
    public: string vtype;
    string vname;
    void setTWData()
    {
        setVData();
        cout << "Enter Vehicle type and name : ";
        cin >> vtype >> vname;
    }
    void dispTWData() 
    {
        dispVData();
        cout << "vehichle type : " << vtype << endl;
        cout << "Vehicle name : " << vname << endl;
    }
};
int main()
{
    TwoWheeler tw;
    FourWheeler fw;
    cout<<"\n\n";
    tw.setTWData();
    fw.setFWData();
    tw.dispTWData();
    fw.dispFWData();
    cout<<"\n\n";
    return 0;
}
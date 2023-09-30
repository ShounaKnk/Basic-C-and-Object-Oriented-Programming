// deeply nested function containing an exception
#include <iostream>
using namespace std;
void function3()
{
    cout << "inside function 3\n";
    throw 0;
}
void function2()
{
    cout << "calling function 3 inside function 2\n\n";
    function3();
}
void function1()
{
    cout << "calling function 2 inside function 1\n\n";
    function2();
}
int main()
{
    try
    {
        cout << "\n\ncalling function 1 inside main\n\n";
        function1();
    }

    catch (int e)
    {
        cout << "exception " <<  e << " handled in main\n\n";
    }
 }

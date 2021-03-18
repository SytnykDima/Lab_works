#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double num1 = 3.12345678;
    {
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << num1 << endl;
    }
    return 0;
}
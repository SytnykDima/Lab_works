#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    double a, b, p, d, s;
    cout << " Enter the lengths ofthe sides a and b " << endl;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    p=(a+b)*2;
    d=sqrt(a*a+b*b);
    s=a*b;
    cout << " results " << endl;
    cout << " p = " << p << " d = " << d << " s = " << s << endl;
    return 0;
}
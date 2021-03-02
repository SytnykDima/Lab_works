#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char** argv) 
{  
    int a, b, max;
    cout << "Input a, b: " << endl;
    cin >> a >> b;
    if ( b >= a ) max = b;
    else max = a;
    cout << "max = " << max << endl;
    return 0;
}

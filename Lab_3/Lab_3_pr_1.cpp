#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char** argv) 
{
    int a, b, max;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    max = a;
    if (b > max ) max = b;
    cout << "max = " << max <<endl;
    return 0;
}
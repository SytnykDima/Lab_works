#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main( )
{
    float pi, r, h, V;
    pi = 3.14159265359;
    cout << "Введіть радіус r: ";
    cin >> r;
    cout << "Веедіть висоту h: ";
    cin >> h;
    
    V = (pi * pow(r, 2) * h) / 3;
    
    cout << "Об'єм конуса = " << V << endl;
    
    getch();
    return 0;
}
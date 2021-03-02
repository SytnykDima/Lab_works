#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
void cycle_for() {
    int mode, i = 0, n;
    n = 6;
    float a, b, z, y;
    a = 0.8;
    b = 0.8;
    float x[] = {pow(a, 3)/2, 0, pow(a, 3), (b + pow(a, 3)) / 2, b, 2*b};
    cout << "a = " << a << "\tb = " << b << "\tz = " << z << endl;
    for (i = 0; i < n; i++) {
        z = exp(x[i]);
        if (x[i] < pow(a, 3)) {
            y = a * pow(sin(x[i]), 2.5) + b * cos(z*x[i] + a);
        }
        else if (x[i] >= pow(a, 3) || x[i] <= b) {
            y = pow(a + b*x[i], 2) - sin(a + z*x[i]);
        }
        else {
            y = sqrt(sin(a + b*x[i] + z) - x[i]);
        }
        cout << "x = " << x[i] << "\t\ty = " << y << endl;
    }
}
void cycle_while() {
    int mode, i = 0, n;
    n = 6;
    float a, b, z, y;
    a = 1.2;
    b = 2.3;
    float x[] = {pow(a, 3)/2, 0, pow(a, 3), (b + pow(a, 3)) / 2, b, 2*b};
    cout << "a = " << a << "\tb = " << b << "\tz = " << z << endl;
    i = 0;
    while (i < n) {
        z = exp(2 * x[i]);
        if (x[i] < pow(a, 3)) {
            y = a * pow(sin(x[i]), 2.5) + b * cos(z*x[i] + a);
        }
        else if (x[i] >= pow(a, 3) || x[i] <= b) {
            y = pow(a + b*x[i], 2) - sin(a + z*x[i]);
        }
        else {
            y = sqrt(sin(a + b*x[i] + z) - x[i]);
        }
        cout << "x = " << x[i] << "\t\ty = " << y << endl;
        i += 1;
    }
}
void cycle_do_while() {
    int mode, i = 0, n;
    n = 6;
    float a, b, z, y;
    a = 1.9;
    b = 9.2;
    z = exp(3);
    float x[] = {pow(a, 3)/2, 0, pow(a, 3), (b + pow(a, 3)) / 2, b, 2*b};
    cout << "a = " << a << "\tb = " << b << "\tz = " << z << endl;
    i = 0;
    do {
        z = exp(x[i]);
        if (x[i] < pow(a, 3)) {
            y = a * pow(sin(x[i]), 2.5) + b * cos(z*x[i] + a);
        }
        else if (x[i] >= pow(a, 3) || x[i] <= b) {
            y = pow(a + b*x[i], 2) - sin(a + z*x[i]);
        }
        else {
            y = sqrt(sin(a + b*x[i] + z) - x[i]);
        }
        cout << "x = " << x[i] << "\t\ty = " << y << endl;
        
        i += 1;
    }
    while(i < n);
}
int main()
{
    int mode, i = 0, n;
    n = 6;
    float x[n], a, b, z, y;
    
    for (i = 0; i < n; i++) {
        x[i] = 0;
    }
    system ("CLS");
    cout << "1 — cycle for;\t2 — cycle while;\t3 — cycle do while\nSelect a cycle: ";
    cin >> mode;
    switch(mode) {
        case 1: cout << "You have selected a cycle for!" << endl; cycle_for(); break;
        case 2: cout << "You have selected a cycle while!" << endl; cycle_while(); break;
        case 3: cout << "You have selected a cycle do while!" << endl; cycle_do_while(); break;
    }
    system ("pause");
    return 0;
}
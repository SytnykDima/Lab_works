#include <iostream>
#include <conio.h>

using namespace std;

int main( )
{
    float a, h, S;
    
    cout << "Введіть a та h: " << endl;
    cin >> a >> h;
    
    S = a * h / 2;
    
    cout << " S = " << S << endl;
    
    getch();
    return 0;
}

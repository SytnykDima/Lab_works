#include <iostream>
#include <conio.h>

using namespace std;

int main( )
{
    int n;
    
    cout << "Введіть кількість хвилин: ";
    cin >> n;
    
    if (n >= 1440) {
        cout << n / 60 / 24 << " дн. " << n / 60 % 24 << " год. " << n % 60 << " хв." << endl;
    }
    else {
        cout << n / 60 % 24 << " год. " << n % 60 << " хв." << endl;
    }
    
    getch();
    return 0;
}
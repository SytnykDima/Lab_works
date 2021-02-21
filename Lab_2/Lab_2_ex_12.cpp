#include <iostream>
#include <conio.h>

using namespace std;

int main( )
{
    int x, last_number;
    cout << "Введіть число: ";
    cin >> x;
    while (x > 0) {
        last_number = x % 10;
        cout << last_number;
        x /= 10;
    }
    
    getch();
    return 0;
}
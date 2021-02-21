#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b;
    
    b = 10; a = b++;
    cout << "a = " << a << "  b = " << b << endl;
    b = 10; a = ++b;
    cout << "a = " << a << "  b = " << b << endl;
    
    getch();
    return 0;
}

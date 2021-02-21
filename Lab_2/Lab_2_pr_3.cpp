#pragma hdrstop
#include <iostream>
#include <conio.h>
#pragma argsused

using namespace std;

int main(int argc, char** argv)
{
    int x;
    x = 2147483647;
    cout << "x = " << x << endl;
    x = x + 1;
    cout << "x = " << x << endl;
    
    getch();
    return 0;
}

#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "Input a: ";
	cin >> a ;
	cout << "Input b: ";
	cin >> b ;
	c = (a > b) ? b : a;
	cout << "c=" << c << endl ;
    return 0;
}
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main() 
{
    int a;
    cout << "Input a: " << endl;
    cin >> a;
    scanf("%d", &a);
	printf("%d", a > 0 ? a : -a);
	return 0;
}
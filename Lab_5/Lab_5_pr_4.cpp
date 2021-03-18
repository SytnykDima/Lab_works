#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{
    const int n=15;
    int arr1[] = {1,3,-10,2,4,8,43,9,14,0,1,2,3,-5,-9};
    for (int i=0; i<n; i++)
    cout << arr1[i] << endl;
    printf("\n");
    int arr2 [n];
    for (int i=0; i<n; i++)
    {arr2 [i]=rand()%25+1;
    cout << arr2[i] <<endl;}
    printf("\n______________________________________________________\n");
    int arr3 [n];
    for (int i=0; i<n; i++)
    {arr3[i]=arr1[i]+arr2[i];
    cout << arr3[i] << endl;}
    return 0;
}
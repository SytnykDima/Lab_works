#include <iostream>
using namespace std;
int main() 
{
    int a = 1;
    int b = 2;
    int c = 3;
    int mid;
if (a > b) 
{
if (a > c) 
{
if (c > b) 
{
    mid = c;
} 
else 
{
    mid = b;
}} 
else 
{
    mid = a;
}
}
else
{
if (b > c)
{
if (c > a)
{
    mid = c;
} else 
{
    mid = a;
}
} else {
    mid = b;
}
}
cout << mid;
}
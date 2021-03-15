#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand( time( 0 ) );
    cout << "rand_value = " << 1 + rand() % 10 << endl;
    return 0;
}
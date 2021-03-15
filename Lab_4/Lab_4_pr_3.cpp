#include <iostream>
using namespace std;
int main()
{
    unsigned rand_value = 11;
    srand(rand_value);
    cout << "rand_value = " << rand_value << endl;
    cout << "1-random number = " << 1 + rand() % 10 << endl;
    cout << "2-random number = " << 1 + rand() % 10 << endl;
    return 0;
}
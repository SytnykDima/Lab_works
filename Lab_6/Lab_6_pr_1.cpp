#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int N=10;
    int a[N][N];
    int n=N+1;
    int A=0, B=0, S, S1=0, S2=0;
    while(n>N) {
        cout << "\nВведіть розмірність матриці: n = ";
        cin >> n;
    }
    while (A >= B) {
        cout << "\nВведіть границі проміжку A i B: ";
        cin >> A >> B;
    }
    cout << "\n\n" << " Матриця А: " << endl;
    for (int i=0; i<n; i++) {
        cout << endl << endl;
        for (int j=0; j<n; j++) {
            a[i][j]=rand()%(B-A)+A;
            cout << a[i][j] << "\t";
        }
    }
    for (int i=0; i<n; i++) {
        S1 += a[i][i];
        S2 += a[n-1-i][i];
    }
    S = S1 + S2;
    cout << "\n\nСума діагональних елементів S = " << S;
    return 0;
}
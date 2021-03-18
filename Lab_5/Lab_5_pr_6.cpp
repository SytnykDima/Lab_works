#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    const int n=10;
    int i, j, tmp, arr[n]={0, -11, 45, 67, 3, -9, 33, -55, 2, 12};
    cout << " initial array: "<< endl;
    for (i=0; i<n; i++){
    cout << arr[i] <<'\t';
    }
    for (i=0; i<=n-1; i++){
        for (j=0; j<=n-2-i; j++){
            if ( arr[j]>arr[j+1] ){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    cout << " ordered array: " << endl;
    for (i=0; i<n; i++){
        cout << arr[i] <<'\t';
    }
}
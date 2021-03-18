#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    const int n=10;
    int i, j, tmp, arr[n]={-1, -1, 4, 7, 3, -9, 3, -5, 2, 1};
    int sum=0, proiz=1;
    cout << " initial array: "<< endl;
    for (i=0; i<n; i++) {
    cout << arr[i] <<'\t';
    }
    for (i=0; i<n; i++) {
    sum+=arr[i];
    proiz*=arr[i];
    }
    cout << " \n sum = " << sum << endl;
    cout << " proiz = " << proiz << endl;
    for (i=0; i<=n-1; i++){
      for (j=0; j<=n-2-i; j++){
        if ( arr[j]>arr[j+1] ) {
            tmp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = tmp;
            }
        }
    }
    cout << " ordered array: " << endl;
    for (i=0; i<n; i++){
    cout << arr[i] <<'\t';}
}
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, m, a=0, b=0;
    cout << " \nВведіть розмірнoстi масиву n i m:\n";
    cin >> n;
    cin >> m;
    cout << "\n n="<< n <<" m=" << m; 
    while (a>=b) { //перевірка правильності
        cout<<" \n\n Введіть границі інтервалу a i b:\n";
        cin >> a;
        cin >> b;
        cout<<"\n a="<<a<<" b="<<b;
    }
    int** arr = new int*[n];
    cout<<"\n\n Початковий масив:\n";
    for (int i=0;i<n;i++) {
        arr[i] = new int[m];
        cout<<"\n";
        for (int j=0;j<m;j++) {
            arr[i][j]=rand()%(b-a)+a;
            cout<<arr[i][j]<<"\t";
        }
    }
    float** brr = new float*[3];
    for (int i=0;i<3;i++)
    brr[i] = new float[m];
    for (int j=0;j<m;j++) { // по стовпцях 
        int min=b;// початкове значення мінімуму у стовпці
        int max=a; // початкове значення максимуму у стовпці
        float s=0; // для накопичення суми у середнє арифметичне у стовпці
        for (int i=0;i<n;i++) {
            if (arr[i][j]>max) max = arr[i][j];
            if (arr[i][j]<min) min = arr[i][j];  s += arr[i][j];
        }
        s = s/n; // обчислюємо середнє арифметичне
        brr[0][j] = max;
        brr[1][j] = s;
        brr[2][j] = min;
    }
    cout<<"\n\n Результуючий масив:\n";
    for (int i=0;i<3;i++) {
        cout<<"\n";
        for (int j=0;j<m;j++)
        if (i==1) cout<<brr[i][j]<<"\t";
        else cout<<brr[i][j]<<"\t";
    }
    delete[] arr;
    delete[] brr;
    return 0;
}

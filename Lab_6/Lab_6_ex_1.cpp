#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h> // Для функцій rand() і srand()
#include <cstdlib> // Для функцій rand() і srand()
#include <ctime> // Для функцій time()

using namespace std;

int main()
{
    srand(time(NULL));
    
    const int N = 10;
    const int M = 10;
    int n, m;
    int i, j;
    int a, b;
    int sum = 0;
    
    cout << "Введіть розміри масиву" << endl;
    while (true) {
        cout << "Введіть кількість рядків: ";
        cin >> n;
        if (n <= N && n > 0) {
            break;
        }
        else if (n <= 0) {
            cout << "Помилка!\nКількість рядків має бути > 0!\nСпробуйте знову!\n"<< endl;
            continue;
        }
        else {
            cout << "Помилка!\nКількість рядків має бути ≤ " << N << "!\nСпробуйте знову!\n" << endl;
            continue;
        }
    }
    while (true) {
        cout << "Введіть кількість стовпців: ";
        cin >> m;
        if (m <= M && m > 0) {
            break;
        }
        else if (m <= 0) {
            cout << "Помилка!\nКількість стовпців має бути > 0!\nСпробуйте знову!\n"<< endl;
            continue;
        }
        else {
            cout << "Помилка!\nКількість стовпців має бути ≤ " << M << "!\nСпробуйте знову!\n" << endl;
            continue;
        }
    }
    cout << "\nГенеруємо числа від a до b" << endl;
    while (true) {
        cout << "Введіть число a: ";
        cin >> a;
        cout << "Введіть число b: ";
        cin >> b;
        if (a < b) {
            break;
        }
        else {
            cout << "Помилка!\na має бути меншим від b!\nСпробуйте знову!\n" << endl;
            continue;
        }
    }
    
    // Оголошення масиву my_matrix[n][m] та sum_arr[m]
    int my_matrix[n][m];
    int sum_arr[m];
    
    // Генерування цілих чисел та додавання їх до масиву my_matrix[n][m]
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            my_matrix[i][j] = a + rand() % (b - a + 1);
        }
    }
    
    // Обчислення суми елементів масиву за кожним стовпчиком та додавання результатів до масиву sum_arr[m]
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            sum += my_matrix[i][j];
        }
        sum_arr[j] = sum;
        sum = 0;
    }
    
    // Виведення елементів масиву my_matrix[n][m]
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (j < m - 1) {
                cout << setw(5) << my_matrix[i][j] << "\t";
            }
            else {
                cout << setw(5) << my_matrix[i][j] << endl;
            }
        }
    }
    
    // Виведення елементів масиву sum_arr[m]
    cout << "Сума елементів масиву по стовпчикам" << endl;
    for (j = 0; j < m; j++) {
        if (j < m - 1) {
            cout << setw(5) << sum_arr[j] << "\t";
        }
        else {
            cout << setw(5) << sum_arr[j] << endl;
        }
    }
    
    return 0;
}
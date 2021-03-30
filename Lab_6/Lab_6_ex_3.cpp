#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h> // Для функцій rand() і srand()
#include <cstdlib> // Для функцій rand() і srand()
#include <ctime> // Для функцій time()

using namespace std;
int main() {
    srand(time(NULL)); 
    const int N = 10;
    const int M = 10;
    int rows_num, cols_num;
    int i, j;
    int a, b;
    int sum = 0;
    float arithmetic_mean;
    int **my_matrix; 
    cout << "Введіть розміри масиву" << endl;
    while (true) {
        cout << "Введіть кількість рядків: ";
        cin >> rows_num;
        if (rows_num <= N && rows_num > 0) {
            break;
        }
        else if (rows_num <= 0) {
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
        cin >> cols_num;
        if (cols_num <= M && cols_num > 0) {
            break;
        }
        else if (cols_num <= 0) {
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
    
    // Виділення динамічної пам'яті для масиву my_matrix[n][m]
    const int n = rows_num;
    const int m = cols_num;
    my_matrix = (int **) new int *[n];
    for (i = 0; i < n; i++) {
        my_matrix[i] = new int [m];
    }
    
    // Генерування цілих чисел та додавання їх до масиву my_matrix[n][m]
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            my_matrix[i][j] = a + rand() % (b - a + 1);
        }
    }
    
    // Обчислення суми всіх елементів масиву my_matrix[n][m]
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sum += *(my_matrix[i] + j);
        }
    }
    
    // Знаходження середнього арифметичного усіх елементів масиву my_matrix[n][m]
    arithmetic_mean = sum / (n * m);
    
    // Виведення елементів масиву my_matrix[n][m]
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (j < m - 1) {
                cout << setw(5) << *(my_matrix[i] + j) << "\t";
            }
            else {
                cout << setw(5) << *(my_matrix[i] + j) << endl;
            }
        }
    }
    
    // Виведення результатів
    cout << "\nСереднє арифметичне усіх елементів матриці дорівнює " << arithmetic_mean << endl;
    
    int num_of_el_in_row = 0;
    cout << "\nПослідовність елементів матриці, які попадають в інтервал [a/4, b/4] виглядає так:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (my_matrix[i][j] >= a/4 || my_matrix[i][j] <= b/4) {
                num_of_el_in_row += 1;
                if (num_of_el_in_row < m - 1) {
                    cout << setw(5) << *(my_matrix[i] + j);
                }
                else {
                    cout << setw(5) << *(my_matrix[i] + j) << endl;
                    num_of_el_in_row = 0;
                }
            }
        }
    }
    
    return 0;
}

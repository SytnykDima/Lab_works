#include <iostream>
#include <stdlib.h> // Для функцій rand() і srand()
#include <cstdlib> // Для функцій rand() і srand()
#include <ctime> // Для функцій time()
#include <math.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    const int n = 10; // кільскість елементів масиву
    int a, b, i, num_of_zero_el = 0;
    float min_el, min_el_pos, sum = 0;
    int precision, num_of_digits; // кількість знаків пілся коми
    
    // Введення значень
    do {
        cout << "Генеруємо числа від a: ";
        cin >> a;
        cout << "До b: ";
        cin >> b;
        if (a < b) {
            break;
        }
        else {
            cout << "\nЧисло a має бути меншим b!\nСпробуйте знову!\n" << endl;
        }
    } while (true);
    
    // Визначення кількості знаків після коми
    cout << "Введіть кількість знаків після коми: ";
    cin >> precision;
    num_of_digits = pow(10, precision);
    
    // Оголошення масиву дійсних чисел та змінної для визначення значення елемента масиву
    float rand_real_num;
    float* real_nums_arr = new float[n];
    
    // Генерування дійсних чисел та додавання їх до масиву real_nums_arr[]
    for (i = 0; i < n; i++) {
        rand_real_num = a * num_of_digits + rand() % (b * num_of_digits - a * num_of_digits + 1);
        real_nums_arr[i] = rand_real_num / num_of_digits;
    }
    
    // Підрахунок кількості елементів масиву, які дорівнюють 0
    for (i=0; i < n; i++) {
        if (real_nums_arr[i] == 0) {
            num_of_zero_el += 1;
        }
    }
    
    // Визначення мінімального елемента масиву
    min_el = real_nums_arr[0];
    for (i=0; i < n; i++) {
        if (real_nums_arr[i] < min_el) {
            min_el = real_nums_arr[i];
            min_el_pos = i;
        }
    }
    
    // Обчислення суми елементів масиву, розташованих після мінімального елемента
    for (i=min_el_pos+1; i < n; i++) {
        sum += real_nums_arr[i];
    }
    
    // Виведення результатів
    cout << "Масив виглядає наступним чином: " << endl;
    for (i=0; i < n; i++) {
        if (i != n-1) {
            cout << real_nums_arr[i] << "\t";
        }
        else {
            cout << real_nums_arr[i] << endl;
        }
    }
    
    cout << "Кількість елементів: " << n << endl;
    cout << "Мінімальний елемент: " << min_el << endl;
    cout << "Позиція мінімального елемента: " << min_el_pos+1 << endl;
    cout << "Кількість елементів масиву рівних 0: " << num_of_zero_el << endl;
    cout << "Cума елементів масиву, розташованих після мінімального елемента: " << sum << endl;
    
    return 0;
}
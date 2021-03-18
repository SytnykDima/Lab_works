#include <iostream>
#include <stdlib.h> // Для функцій rand() і srand()
#include <cstdlib> // Для функцій rand() і srand()
#include <ctime> // Для функцій time()
#include <math.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int m, n, k, i, j, a_left_lim, a_right_lim, b_left_lim, b_right_lim;
    int precision, num_of_digits; // кількість знаків пілся коми
    
    // Введення значень
    cout << "Введіть число m — кількість цілих чисел, які потрібно згенерувати: ";
    cin >> m;
    cout << "Генеруємо числа від: ";
    cin >> a_left_lim;
    cout << "До: ";
    cin >> a_right_lim;
    
    // Оголошення масиву цілих чисел
    int int_nums_arr[m];
    
    cout << "\nВведіть число n — кількість дійсних чисел, які потрібно згенерувати: ";
    cin >> n;
    cout << "Генеруємо числа від: ";
    cin >> b_left_lim;
    cout << "До: ";
    cin >> b_right_lim;
    
    // Визначення кількості знаків після коми
    cout << "\nВведіть кількість знаків після коми: ";
    cin >> precision;
    num_of_digits = pow(10, precision);
    
    Оголошення масиву дійсних чисел та змінної для визначення значення елемента масиву
    float rand_real_num, real_nums_arr[n] = {};
    
    // Введення числа k з перевіркою на відповідність діапазону
    do {
        cout << "\nВведіть число k — кількість чисел в рядку: ";
        cin >> k;
        if (k >= 3 && k <=10) {
            break;
        }
        else {
            cout << "\nЧисло k має бути в діапазоні 3 ⩽ k ⩽ 10!\nСпробуйте знову!" << endl;
        }
    } while (true);
    
    
    // Генерування цілих чисел та додавання їх до масиву int_nums_arr[]
    for (i = 0; i < m; i++) {
        int_nums_arr[i] = a_left_lim + rand() % (a_right_lim - a_left_lim + 1);
        if (i < k-1) {
            cout << int_nums_arr[i] << "\t";
        }
        else if (((i+1) % k) == 0 or i == k-1) {
            cout << int_nums_arr[i] << endl;
        }
        else {
            cout << int_nums_arr[i] << "\t";
        }
    }
    
    cout << endl;
    
    // Генерування дійсних чисел та додавання їх до масиву real_nums_arr[]
    for (i = 0; i < n; i++) {
        rand_real_num = b_left_lim * num_of_digits + rand() % (b_right_lim * num_of_digits - b_left_lim * num_of_digits + 1);
        real_nums_arr[i] = rand_real_num / num_of_digits;
        if (i < k-1) {
            cout << real_nums_arr[i] << "\t";
        }
        else if (((i+1) % k) == 0 or i == k-1) {
            cout << real_nums_arr[i] << endl;
        }
        else {
            cout << real_nums_arr[i] << "\t";
        }
    }
    
    
    // Визначення кількості парних та непарних елементів
    int num_of_even_el = 0, num_of_odd_el = 0; // кількість парних та непарних елементів
    
    for (i = 0; i < m; i++) {
        if ((int_nums_arr[i] % 2) == 0) {
            num_of_even_el += 1;
        }
        else {
            num_of_odd_el += 1;
        }
    }
    
    // Розподілення елементів по відповідним масивам
    int even_elements_array[num_of_even_el], odd_elements_array[num_of_odd_el]; // оголошення двох масивів з парними та непарними елементами масиву int_nums_arr[]
    int even_el_arr_index = 0, odd_el_arr_index = 0; // змінні для зміщення по масивам праних та непарних елементів при розподіленні
    int temp_var; // змінна для тимчасового зберігання значення едементу при сортуванні
    
    for (i = 0; i < m; i++) {
        if ((int_nums_arr[i] % 2) == 0) {
            even_elements_array[even_el_arr_index] = int_nums_arr[i];
            even_el_arr_index += 1;
        }
        else {
            odd_elements_array[odd_el_arr_index] = int_nums_arr[i];
            odd_el_arr_index += 1;
        }
    }
    
    // Виведення масиву парних елементів до сортування
    cout << "\nМасив парних елементів до сортування:" << endl;
    for (i = 0; i < num_of_even_el; i++) {
        if (i != num_of_even_el - 1) {
            cout << even_elements_array[i] << "\t";
        }
        else {
            cout << even_elements_array[i] << endl;
        }
    }
// Виведення масиву непарних елементів до сортування
    cout << "\nМасив непарних елементів до сортування:" << endl;
    for (i = 0; i < num_of_odd_el; i++) {
        if (i != num_of_odd_el - 1) {
            cout << odd_elements_array[i] << "\t";
        }
        else {
            cout << odd_elements_array[i] << endl;
        }
    }
    
    
    
    // Сортування масиву парних елементів за зростанням
    for (i = 0; i < num_of_even_el; i++) {
        for (j = 0; j < num_of_even_el; j++) {
            if (even_elements_array[j] > even_elements_array[j + 1]) {
                temp_var = even_elements_array[j];
                even_elements_array[j] = even_elements_array[j + 1];
                even_elements_array[j + 1] = temp_var;
            }
        }
    }
    
    // Сортування масиву непарних елементів за спаданням
    for (i = num_of_odd_el-1; i > 0; i--) {
        for (j = num_of_odd_el-1; j > 0; j--) {
            if (odd_elements_array[j] > odd_elements_array[j - 1]) {
                temp_var = odd_elements_array[j];
                odd_elements_array[j] = odd_elements_array[j - 1];
                odd_elements_array[j - 1] = temp_var;
            }
        }
    }
    
    
    // Виведення масиву парних елементів після сортування
    cout << "\nМасив парних елементів після сортування:" << endl;
    for (i = 0; i < num_of_even_el; i++) {
        if (i != num_of_even_el - 1) {
            cout << even_elements_array[i] << "\t";
        }
        else {
            cout << even_elements_array[i] << endl;
        }
    }
    // Виведення масиву непарних елементів
    cout << "Масив непарних елементів після сортування:" << endl;
    for (i = 0; i < num_of_odd_el; i++) {
        if (i != num_of_odd_el - 1) {
            cout << odd_elements_array[i] << "\t";
        }
        else {
            cout << odd_elements_array[i] << endl;
        }
    }
    
    return 0;
}
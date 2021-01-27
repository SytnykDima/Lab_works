#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    
    float v1, v2, s, s1, s2, t, dist;
    bool cars_pos;
    
    cout << "Введіть значення!\nШвидкість v1: ";
    cin >> v1;
    cout << "Швидкість v2: ";
    cin >> v2;
    cout << "Початкова відстань між автомобілями s: ";
    cin >> s;
    cout << "Час t: ";
    cin >> t;
    
    s1 = v1 * t;
    s2 = v2 * t;
    
    // Потрібно визначити який з автомобілів їде попереду, оскільки це важливо для обчислень
    cout << "Чи автомобіль 1 їде спереду автомобіля 2?" << endl;
    cout << "1 — автомобіль 1 їде спереду" << endl;
    cout << "0 — автомобіль 1 їде ззаду" << endl;
    cout << "Введіть значення (0, 1): " << endl;
    cin >> cars_pos;
    
    if (cars_pos == true) {
        if (v1 > v2)
            dist = s1 - s2 + s;
        else if (v1 < v2)
            dist = s1 - s2 + s;
        else
            dist = s1 - s2 + s;
    }
    else {
        if (v1 > v2)
            dist = s1 - s2 - s;
        else if (v1 < v2)
            dist = s1 - s2 - s;
        else
            dist = s1 - s2 + s;
    }
    
    // Робимо змінну dist по модулю оскільки відстань не може бути від'ємною
    dist = abs(dist);
    
    cout << "Відстань між автомобілями = " << dist << endl;
    
    return 0;
}
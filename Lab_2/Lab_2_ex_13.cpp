#include <iostream>
#include <conio.h>

using namespace std;

int main( )
{
    float dep_sum, month_prof, dep_prof, total_sum, vids_stavka;
    int month_num, days_in_year, days_in_month;
    
    days_in_year = 365;
    days_in_month = 30;
    vids_stavka = 5;
    cout << "Введіть суму депозиту в дол. США: ";
    cin >> dep_sum;
    cout << "Введіть кількість місяців: ";
    cin >> month_num;
    
    cout << "Прибуток з депозиту за місяць: ";
    month_prof = dep_sum * (vids_stavka / 100) / days_in_year * days_in_month;
    cout << dep_sum << " * (" << vids_stavka << " / 100) / " << days_in_year << " * " << days_in_month << " = "<< month_prof << " $" << endl;
    
    cout << "Прибуток за весь термін депозиту: ";
    dep_prof = month_prof * month_num;
    cout << dep_prof << " $" << endl;
    
    cout << "Загальна сума до виплати в кінці терміну: ";
    total_sum = dep_sum + dep_prof;
    cout << total_sum << " $" << endl;

    getch();
    return 0;
}
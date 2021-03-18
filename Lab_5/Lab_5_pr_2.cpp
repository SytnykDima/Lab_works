#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main ()
{
    int n;
    printf ("\n\t\tГЕНЕРУВАННЯ ВИПАДКОВИХ ЧИСЕЛ \n\n\n");
    printf (" Введіть кількість чисел послідовності: n = ");
    scanf ("%d", &n);
    srand (time(NULL) );
    printf("\n\n\t Цілі випадкові числа на проміжку [-50,100]:\n");
    for (int i=0; i<n; i++)
    {if (i%10==0) printf("\n");
    int number = rand()%150-50;
    printf("%7d", number);}
    printf("\n\n\tДійсні випадкові числа на проміжку [-100,100]:\n");
    for (int i=0; i<n; i++)
    {if (i%10 == 0) printf("\n");
    float number = (float)rand()/RAND_MAX*200-100;
    printf("%7.1f", number);}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main ()
{
    int iSecret, iGuess;
    srand (time(NULL));
    iSecret = rand() % 10 + 1;
    do
    {printf (" Guess the number (1 to 10): ");
     scanf ("%d", &iGuess);
     if (iSecret < iGuess)
     {puts(" The secret number is lower ");}
     else if (iSecret > iGuess)
     {puts(" The secret number is higher ");} }
     while (iSecret!=iGuess);
     {puts ("\n\n\tCongratulations!");}
     return 0;
}
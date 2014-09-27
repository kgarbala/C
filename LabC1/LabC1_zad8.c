/*Zad. 8 Konwersja miar długości
Dana jest liczba rzeczywista stanowiąca odległość wyrazoną w centymetrach. Wyświetlić na
ekranie równowazną wartość składającą się z liczby reprezentującą długość w stopach (liczba
całkowita) i calach (liczba rzeczywista z jednym miejscem po przecinku). NaleŜy przyjąć, Ŝe
2,54 cm = 1 cal oraz 12 cali = 1 stopa.
Przykład: 333.3 cm to 10 stóp 11.2 cali
*/
#include <stdio.h>
int main (void)
{
    float cm=333.3, cale;
   int stopy;
   cale=cm/2.54;
   stopy=cm/2.54/12;
   cale=12*(cale/12-stopy);

   printf("%0.2f cm to %d stop i %0.2f cali", cm, stopy, cale );

   return 0;
}

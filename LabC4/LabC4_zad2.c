/* Zad. 2 Obliczanie wartości funkcji kwadratowej
Napisać program obliczający wartości funkcji kwadratowej postaci:
y = 3x^2 - 2x + 4
Niech zakres zmiennej x mieści się w przedziale od -5 do +5 z krokiem 2.
*/
#include <stdio.h>
int main (void)
{
    puts("\tObliczanie wartosci funkcji kwadratowej\n");
   float x=-5.0, y,i=-5.0;
   for (x=-5.0;x<=5.0;x+=0.2)
 {
   y=3*x*x-2*x+4;
   printf("%0.2f\n",y);
}
   return 0;
}

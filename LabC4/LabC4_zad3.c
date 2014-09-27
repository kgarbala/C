/* Zad. 3 Konwersje temperatur
Napisać program, który zamienia temperaturę ze skali Farenheita na temperatury w skali
Celsjusza w przedziale od 0F do 100F co 10F.
0 F to -17.78 C
10 F to -12.22 C
20 F to -6.67 C
30 F to -1.11 C
40 F to 4.44 C
50 F to 10.00 C
*/
#include <stdio.h>
int main (void)
{
    int  F;
    float C;
   puts ("\tKonwersja temperatur\n");
   for (F=0;F<=100;F+=10)
   {
     C=(F-32)/1.8;
     printf("%d F to %0.2f C\n", F, C);
   }

   return 0;
}

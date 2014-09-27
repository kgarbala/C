/*Zad. 7 Konwersja temperatur
Napisać program wczytujący z klawiatury liczbę rzeczywistą reprezentującą temperaturę w
stopniach Celsiusa, a następnie wyświetlić liczbę rzeczywistą będącą temperaturą w stopniach
Fahrenheita. NaleŜy wyświetlić na ekranie następującą informację:
100.0 stopni Celsiusa to 212.0 stopni Fahrenheita.
*/
#include <stdio.h>
int main (void)
{
   float Cel, Far;
   printf("Wprowadz temperature w stopniach Celsiusach: ");
   scanf("%f", &Cel);
   Far=32+Cel*9/5.0;
   printf("%0.2f stopni Celsiusa to %0.2f stopni Fahrenheita ", Cel, Far);
   return 0;
}


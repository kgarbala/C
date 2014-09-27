/*Zad. 10 Operacje I/O
Wprowadź z klawiatury swoje nazwisko, adres, rok urodzenia, płeć (k lub m) oraz wyświetl te
dane w oknie konsolowym w następującej postaci:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char nazwisko[30], adr[30], plec[30];
    int rok;
   printf ("wprowadz nazwisko:\t");
   scanf("%s", &nazwisko);
   printf ("wprowadz adres:\t");
   scanf("%s", &adr);
   printf("wprowadz rok urodzenia:\t");
   scanf("%d", &rok);
   printf ("wprowadz plec:\t");
   scanf("%s", &plec);
   puts ("******************************");
   printf("nazwisko:       %s\n", nazwisko);
   printf("adres:          %s\n", adr);
   printf("rok:            %d\n", rok);
   printf("plec:           %s\n", plec);
   return 0;
}

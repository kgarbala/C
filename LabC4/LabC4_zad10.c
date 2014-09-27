/* Zad. 10 Suma ciągu liczb zakończonego zerem
Napisać program obliczający sumę ciągu liczb całkowitych wprowadzanych z klawiatury,
zrealizowany przy pomocy instrukcji do-while. Wczytanie liczby 0 powinno zakończyć pętlę,
a tym samym wczytywanie danych i realizowanie obliczeń.
*/
#include <stdio.h>
int main (void)
{
    float x, suma;
    suma=0;
   puts ("\tSuma ciagu liczb zakonczonego zerem\n");
   puts("wprowadz liczby:");
   do
   {
      scanf("%f", &x);
      suma+=x;
   }while (x!=0);
   printf("Suma=%0.2f", suma);
   return 0;
}

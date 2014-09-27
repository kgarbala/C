/* Zad. 1 Obliczenie silni
NaleŜy wprowadzić z klawiatury liczbę całkowitą dodatnią i obliczyć silnię tej liczby stosując
pętlę for.
*/
#include <stdio.h>
int main (void)
{
    int n,i, silnia;
   puts ("\tSilnia\n");
   puts ("wprawdz liczbe: ");
   scanf("%d", &n);
   silnia=1;

   for (i=1;i<=n; i++)
    silnia=i*silnia;

   printf("silnia=%d", silnia);
   return 0;
}

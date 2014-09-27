/* Zad. 8 Suma szeregu
Stosując instrukcję while napisać program obliczający sumę szeregu W(n) = 1 - 2 + 3 - ... ± n,
w którym n jest liczbą całkowitą wczytaną z klawiatury.
*/
#include <stdio.h>
int main (void)
{
    int i,n,W;
    i=0;
    W=0;
   puts ("\tSuma szeregu\n");
   puts("Podaj n:");
   scanf("%d",&n);
   while (i<n)
   {
       if (i%2==0) W+=i;
       else        W+=-i;
    i+=1;
   }
   printf("W=%d", W);
   return 0;
}

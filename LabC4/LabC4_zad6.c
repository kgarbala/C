/* Zad. 6 Obliczanie n-tego wyrazu ciągu Fibonacciego
Napisać program obliczający wartość n-tego wyrazu ciągu Fibonacciego, który opisany jest
następującym wzorem rekurencyjnym:
f= 0         dla n=0
f= 1         dla n=1
f=fn-1 +fn-2 dla n>1
*/
#include <stdio.h>
int main (void)
{
    int n,i,f,f1,f2;
    i=0;
   puts ("\tciag Fibonacciego\n");
   puts("wprowadz n:");
   scanf("%d", &n);
   puts("****************");
   f1=0;
   f2=1;
   for (i=1;i<=n;i++)
   {
     f=f1+f2;
     f1=f2;
     f2=f;
     printf("%d\n", f);
   }
   printf("n-ty ciag Fibonacciego=%d\n", f);
   return 0;
}

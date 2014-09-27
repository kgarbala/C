/* Zad. 9 Iloczyn skalarny dwóch wektorów
Napisać program, który przy uzyciu petli while wylicza iloczyn skalarny dwóch wektorów:
X = (x1, x2, x3...xn)
Y = (y1, y2, y3...yn)
Iloczyn skalarny: S = X *Y oblicza się wg następującego wzoru:
S=suma(xi*yi)
Danymi wejściowymi będą wymiar wektorów oraz ich składowe x i y. Składowe naleŜy
wprowadzać parami x1,y1,x2,y2,…xn,yn.
*/
#include <stdio.h>
int main (void)
{
    int   n, i;
    float x, y, S;
   puts ("\tIloczyn skalarny dwoch wektorow\n");
   puts("wprowadz liczbe skladowych wektorow:");
   scanf("%d", &n);
   S=0;
   i=1;

   while(i<=n)
   {
       printf("wprowadz skladowe wektora x%d=",i);
       scanf("%f", &x);
       printf("wprowadz skladowe wektora y%d=",i);
       scanf("%f", &y);
       S=S+x*y;
       i+=1;
   }
   printf("S=%0.2f", S);
   return 0;
}

/* Zad. 7 Obliczenie silni
Skonstruować program, w którym naleŜy wprowadzić z klawiatury liczbę całkowitą dodatnią
nie większą niŜ 6 i obliczyć silnię tej liczby wykorzystując to tego celu instrukcję switch.
*/
#include <stdio.h>
int main (void)
{
    int n;
   puts ("wprowadz liczbe");
   scanf("%d", &n);
   switch(n)
   {
       case(6): n*=5;
       case(5): n*=4;
       case(4): n*=3;
       case(3): n*=2;
       case(2): n*=1;
       case(1): n*=1;
       break;
       case(0): n=1; // silnia(0)=1
       break;
       default: puts("zla liczba ");
   }
   printf("silnia=%d", n);
   return 0;
}

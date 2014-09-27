/* Zad. 2 Trójkąt prostokątny
Napisać program, który sprawdzi czy podane przez uzytkownika z klawiatury długości boków
utworzą trójkąt prostokątny.
*/
#include <stdio.h>
int main (void)
{
    int a,b,c;
   printf ("wprowadz 3 boki trojkata:\n");
   scanf("%d%d%d", &a,&b,&c);
   if (a+b>=c && b+c>=a && c+a>=b)
    printf("bedzie z tego trojkat");
   else printf("nie bedzie z tego trojkata");

   return 0;
}

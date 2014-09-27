/* Zad. 3 Obliczanie pola trójkąta dowolnego
Wykonać aplikację obliczającą pole dowolnego trójkąta, gdy znane są długości jego boków.
W programie naleŜy sprawdzić warunek, czy podane długości boków utworzą trójkąt. Aby
obliczyć pole nalezy zastosować wzór Herona:
P=(a+b+c)/2
S=sqrt(p*(p-a)*(p-b)*(p-c))

*/
#include <stdio.h>
//#include <math.h>
int main (void)
{
       int a,b,c;
       float p;
   printf ("wprowadz 3 boki trojkata:\n");
   scanf("%d%d%d", &a,&b,&c);
   if (a+b>=c && b+c>=a && c+a>=b)
   {
    p=(a+b+c)/2.0;
    printf("S=%0.3f", (p*(p-a)*(p-b)*(p-c)));
   }
   else printf("nie bedzie z tego trojkata");
   return 0;
}

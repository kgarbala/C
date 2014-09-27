/* Zad. 5 Suma szeregu liczbowego
Napisać program obliczający sumę n-wyrazowego szeregu liczbowego. Obliczenia umieścić
w funkcji, przekazującej wynik na zewnątrz.
S=1/(1*2*3)+1/(2*3*4)+1/(3*4*5)+1/(n*(n+1)*(n+2))
*/
#include <stdio.h>
float S=0;
float szereg(int n)
{
    int i;
    S=0;
    for (i=1;i<=n;i++)
    {
        S+=1.0/(i*(i+1)*(i+2));
        //printf("S%d=%f\n",i,S);
    }
    return S;
}
int main (void)
{
   puts ("Suma szeregu liczbowego");
   printf(" Suma szeregu: \n %0.5f", szereg(10));
   return 0;
}

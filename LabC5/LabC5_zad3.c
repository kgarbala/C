/* Zad. 3 Suma elementów ciągu geometrycznego
Napisać program, zawierający następujące funkcje:
 obliczającą sumę n-początkowych elementów ciągu geometrycznego według ponizszego
wzoru:
S=a1*((1-(q^n))/(1-q) dla q!=1
S=n*q               dla  q=1
a1 – pierwszy wyraz ciągu
q – iloraz ciągu
n – liczba wyrazów ciągu
 wyznaczającą n-ty wyraz ciągu:
S = a1*q^n
 wyświetlającą kolejne elementy tego ciągu oraz ich sumę.
W funkcji main() naleŜy wywołać ostatnią funkcje.
*/
#include <stdio.h>
#include <math.h>
float a1, q, S, S2;
int n,i=1;
float suma(float a1, float q, int n)
{
    if (q!=1)     S=a1*(1-pow(q,n))/(1-q);
    if (q==1)     S=n*a1;
    printf("Suma wyrazow ciagu=%0.2f\n",S);
}
float nwyraz(float a1, float q, int n)
{
    float N;
   N = a1*pow(q,n-1);
   printf("%d wyraz ciagu to: %0.2f\n", n, N);
   return N;
}
float el(float a1, float q, int n)
{
        float b1;
        nwyraz(a1,q,n);
        suma(a1,q,n);
        printf("elementy ciagu:\n");
        for (i=0;i<n;i++)
        {
        b1=a1*pow(q,i);
        printf("a%d=%0.2f\n",i+1, b1);
        }
}
int main (void)
{
   puts ("Podaj liczby:");
   printf("a1=");
   scanf("%f",&a1);
   printf("q=");
   scanf("%f",&q);
   printf("n=");
   scanf("%d",&n);
   printf("a1=%0.2f  q=%0.2f  n=%d\n", a1,q,n);
   printf("**********************\n");
   el(a1,q,n);
   return 0;
}

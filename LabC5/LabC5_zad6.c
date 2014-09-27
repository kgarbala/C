/* Zad. 6 Wyznaczanie funkcji cosinus
Utworzyć program, zawierający funkcję obliczającą przybliŜoną sumę dla dowolnej liczby
rzeczywistej, za pomocą rozwinięcia w szereg Taylor’a. Obliczenie naleŜy przerwać w
momencie, gdy kolejny wyraz szeregu będzie mniejszy od zadanej dokładności (np. 0.0001).
cos(x)= 1-x^2/2!+x^4/4!+...
*/
#include <stdio.h>
#include <math.h>
float s=1 ;
int k=1;
float sil()
{
    k+=1;
    s=s*k;
    k+=1;
    s=s*k;
    printf("%f\n",s);
}

float Taylor(x)
{
    int i=2,z=1, k=1;
    float e=0, cos1, cos;
    cos1=0;
    cos=0;
    while (e>=0.0001 || i<=10)
    {
    e=cos-cos1;
    cos1=cos;
    cos=pow(x,i)/sil();
    e=cos-cos1;
    printf("cos%d=%f\n", z,cos);
    z+=1;
    i+=2;
    }
    printf("cos=%0.1f\n", cos);
return cos;

}
int main (void)
{
   puts ("\tTaylor\n");

   printf("%wywolanie funkcji %0.1f\n", Taylor(1));


    return 0;
}

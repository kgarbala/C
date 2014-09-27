/* Zad. 7 Średnia geometryczna ciągu liczb
Opracować program obliczający średnią geometryczną n-liczb wczytywanych przez
uŜytkownika z klawiatury, wykorzystując instrukcję while.
*/
#include <stdio.h>
#include <math.h>
int main (void)
{
    int i,n;
    float suma,x;
    i=0;
    suma=1;
   puts ("\tSrednia geometryczna ciagu liczb\n");
   puts ("Podaj n:");
   scanf("%d", &n);
   puts ("Podaj ciąg liczb:");
   while (i<n)
   {
       scanf("%f", &x);
       if (x<=0) continue;
       suma*=x;
       i+=1;
   }
   printf("srednia geometryczna=%0.2f", pow(suma,1.0/n));
   return 0;
}

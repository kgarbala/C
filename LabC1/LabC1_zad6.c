/*Zad. 6 Obliczanie trzech średnich
Napisać program obliczający średnią arytmetyczną, geometryczną i harmoniczną z 3 liczb
wprowadzonych z klawiatury.
średnia arytmetyczna
(x + y + z)/3
średnia geometryczna  (x × y × z)*(1/3)
średnia harmoniczna 3(1/x+1/y+1/z)
*/
#include <stdio.h>
#include <math.h>
int main (void)
{
   float x,y,z;
   printf("Wprowadz 3 liczby:\n");
   scanf("%f %f %f", &x, &y, &z);

   printf("srednia arytmetyczna: %0.2f\n", (x + y + z)/3);
   printf("srednia geometryczna: %0.2f\n", pow(x * y * z, 1/3.0));
   printf("srednia harmoniczna:  %0.2f\n", 3.0/(1/x + 1/y + 1/z));
   return 0;
}

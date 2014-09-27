/*Zad. 3 Operacje arytmetyczne
Napisać program obliczający sumę, różnicę, iloczyn oraz iloraz dwóch liczb całkowitych.
*/
#include <stdio.h>
int main (void)
{
   float x,y;
   puts ("Wprowadz dwie liczby: ");
   scanf("%f %f",        &x,&y);

   printf("suma= %0.2f\n",    x+y);
   printf("roznica= %0.2f\n", x-y);
   printf("iloczyn= %0.2f\n", x*y);
   printf("iloraz= %0.2f\n",  x/y);
   return 0;
}

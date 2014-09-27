/* Zad. 5 Średnia arytmetyczna ciągu liczb
Napisać program obliczający średnią arytmetyczną 10 liczb całkowitych nieujemnych
wprowadzonych z klawiatury. W przypadku wprowadzenia przez uŜytkownika liczby
ujemnej program powinien pominąć tę sytuację, dzięki zastosowaniu instrukcji kontynuacji
(continue).
*/
#include <stdio.h>
int main (void)
{
    int i;
    float x, suma;
    i=0;
    suma=0;
   puts ("\tSrednia arytmetyczna ciagu liczby:4\n");
   puts ("wprowadz 10 nieujemnych liczb");
   while(i<10)
   {
    scanf("%f",&x);
    if (x<0) continue;
    i+=1;
    suma+=x;
   }
   printf("srednia=%0.2f", suma/10);
   return 0;
}

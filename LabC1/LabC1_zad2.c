/*Zad. 2 Konwersja liczb
Napisać program konwertujący liczbę dziesiętną (zakres 0 – 255)
na znak ASCII, liczbę
ósemkową oraz liczbę szesnastkową.
*/

#include <stdio.h>
int main (void)
{
int liczba;
printf("Podaj liczbe:        ");
scanf("%d" ,&liczba);

printf("Liczba dziesietna    %d \n", liczba);
printf("znak ascii           %c \n", liczba);
printf("Liczba szestnactkowa %o \n", liczba);
printf("Liczba osemkowa      %x \n", liczba);
printf("znaki %c"   , liczba);
   return 0;
}

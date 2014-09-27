/* Zad. 4 Konwersja liczb miedzy róznymi systemami
Skonstruowac program zawierajacy menu informujnce o dostepnych mozliwosciach
konwersji liczb i umozliwiajacy dokonanie wyboru jednej opcji.
1: dziesietna -> szesnastkowa
2: dziesietna -> osemkowa
3: osemkowa -> dziesietna
4: osemkowa -> szesnastkowa
5: szesnastkowa -> dziesietna
6: szesnastkowa -> osemkowa
Nastêpnie uSytkownik ma wporowadziæ z klawiatury liczbê w okreœlonym systemie, a
program wyœwietliæ na ekranie jej przekonwertowany odpowiednik na przyk³ad w formie
poniSszego komunikatu.
Odpowiednikiem liczby osemkowej 72 jest 58 w systemie dziesietnym.
*/
#include <stdio.h>
int main (void)
{
    int numer, liczba;
   puts("Menu: wprowadz numer dzialania");
   puts ("1: dziesietna -> szesnastkowa ");
   puts ("2: dziesietna -> osemkowa ");
   puts ("3: osemkowa -> dziesietna");
   puts ("4: osemkowa -> szesnastkowa");
   puts ("5: szesnastkowa -> dziesietna ");
   puts ("6: szesnastkowa -> osemkowa ");
   scanf("%d",&numer);

   switch (numer)
   {
       case(1):
           {
           puts("Podaj liczbe dziesietna: ");
           scanf("%d", &liczba);
           printf("%d = %X", liczba, liczba);
           }
       break;
       case(2):
           {
           puts("Podaj liczbe dziesietna: ");
           scanf("%d", &liczba);
           printf("%d = %o", liczba, liczba);
           }
       break;
       case(3):
           {
           puts("Podaj liczbe osemkowa: ");
           scanf("%o", &liczba);
           printf("%o = %d", liczba, liczba);
           }
       break;
       case(4):
           {
           puts("Podaj liczbe osemkowa: ");
           scanf("%o", &liczba);
           printf("%o = %X", liczba, liczba);
           }
       break;
       case(5):
           {
           puts("Podaj liczbe szesnastkowa: ");
           scanf("%X", &liczba);
           printf("%X = %d", liczba, liczba);
           }
       break;
       case(6):
           {
           puts("Podaj liczbe szesnastkowa: ");
           scanf("%X", &liczba);
           printf("%X = %o", liczba, liczba);
           }

       break;
       default: puts("nie ma takiej opcji");
   }


   return 0;
}

/* Zad. 6 Lista miesi�cy
Opracowac program, w kt�rym uzytkownik wprowadza numer miesiaca, a program
wy�wietla na ekranie nazwy wszystkich miesi�cy, kt�re pozostaly do ko�ca roku. W
przypadku wpisania nieprawid�owego miesi�ca program powinien wy�wietli� odpowiedni
komunikat. Podczas implementacji naleSy wykorzysta� instrukcj� switch.
*/
#include <stdio.h>
int main (void)
{
    int miech;
   puts ("wprowadz numer miesiaca: ");
   scanf("%d", &miech);
   switch(miech)
   {
       case(1):  puts("luty");
       case(2):  puts("marzec");
       case(3):  puts("kwiecien");
       case(4):  puts("maj");
       case(5):  puts("czerwiec");
       case(6):  puts("lipiec");
       case(7):  puts("sierpien");
       case(8):  puts("wrzesien");
       case(9):  puts("pazdziernik");
       case(10): puts("listopad");
       case(11): puts("grudzien");
       case(12): puts(" ");
       break;
       default:  puts("nie ma takiego miesiaca");
   }

   return 0;
}

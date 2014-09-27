/* Zad. 2 Wyznaczenie liczby dni poszczególnych miesiêcy
Skonstruowac program, w którym nalezy wprowadziæ z klawiatury liczbê w zakresie 1 – 12
bedace numerem miesiaca. W wyniku dzialania tej aplikacji na ekranie powinna pojawic sie
informacja o liczbie dni danego miesiaca.
Rozbudowac program o nastêpuj¹ce elementy:
 sprawdzenie poprawnoœci numeru wprowadzanych miesiêcy,
 uwzglêdnienie lat przestêpnych (w tym celu dla miesi¹ca lutego – liczby 2 naleSy
dodatkowo podaæ rok).
Wskazówka: Rok przestêpny dzieli siê bez reszty przez 400. W innym przypadku rok jest
przestêpny gdy dzieli siê bez reszty przez 4 i jednoczeœnie nie dzieli siê przez 100.
*/
#include <stdio.h>
int main (void)
{
    int miech, rok;
   puts ("Wprowadz numer miesiaca: ");
   scanf("%d",&miech);
   switch(miech)
   {
       case(1): printf("styczen -31");
       break;
       case(2):
           printf("wprowadz rok: ");
           scanf("%d",&rok);
           if (rok%400==0 || (rok%4==0 && rok%100!=0))
                printf("luty -29");
           else printf("luty -28");
       break;
       case(3): printf("marzec -31");
       break;
       case(4): printf("kwiecien -30");
       break;
       case(5): printf("maj -31");
       break;
       case(6): printf("czerwiec -30");
       break;
       case(7): printf("lipiec -31");
       break;
       case(8): printf("sierpien -31");
       break;
       case(9): printf("wrzesien -30");
       break;
       case(10): printf("pazdziernik -31");
       break;
       case(11): printf("listopad -30");
       break;
       case(12): printf("grudzien -31");
       break;
       default: printf("to nie numer miesiaca");


   }
   return 0;
}

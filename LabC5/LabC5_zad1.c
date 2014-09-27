/* Zad. 1 Konwersja czasu
Napisac program zawierajacy funkcje z parametrem przekazujacym do jej wnetrza liczbe
reprezentujaca rok i zwracajaca liczbe bedaca wynikiem konwersji roku na sekundy. Nalezy
uwzglednic lata przestepne.
*/
#include <stdio.h>
int sek=0;
void f( int rok )
        {
            if(rok%400==0 || rok%4==0 && rok%100!=0)
            {
                printf("\tRok przestepny\n");
                sek=366*24*60*60;
            }
            else
            {
                printf("\tRok nie przestepny\n");
                sek=365*24*60*60;
            }
        }
int main (void)
{
    int rok,i=0;
     puts ("\tKonwersja czasu\n");
   puts ("Wprowadz rok");
   scanf("%d",&rok);
   f(rok);
   printf("Liczba sekund dla %d roku to: %d\n", rok, sek);
   return 0;
}

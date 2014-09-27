/* Zad. 4 Obliczanie rabatu
Opracować aplikację, która oblicza wartość towaru, będąca iloczynem jego ceny i liczby
sztuk. W obliczeniach naleŜy uwzględnić rabat, który jest uzaleŜniony od wielkości zakupu.
Rabaty powinny być określane na podstawie następujących wytycznych:
 od 0 d0 49 sztuk – 0% rabatu od całkowitej wartości towaru,
 od 50 do 199 sztuk – 2% rabatu od całkowitej wartości towaru,
 od 200 do 999 sztuk – 5 % rabatu od całkowitej wartości towaru,
 od 1000 sztuk – 10 % rabatu od całkowitej wartości towaru.
*/
#include <stdio.h>
int main (void)
{
    int cena=5, liczba;
   printf("wprowadz liczbe sztuk: ");
   scanf("%d", &liczba);
   if (liczba>=0 && liczba <=49)         printf("wartosc zakupu (rabat 0%):  %dzl",        liczba*cena);
   else if (liczba>=50 && liczba <=199)  printf("wartosc zakupu (rabat 2%):  %0.2fzl",0.98*liczba*cena);
   else if (liczba>=200 && liczba <=999) printf("wartosc zakupu (rabat 5%):  %0.2fzl",0.95*liczba*cena);
   else if (liczba>=1000)                printf("wartosc zakupu (rabat 10%): %0.2fzl",0.90*liczba*cena);
   else printf("Zle wprowadzono");
   return 0;
}

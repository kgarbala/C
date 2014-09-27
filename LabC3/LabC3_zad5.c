/* Zad. 5 Wyznaczanie dnia tygodnia
Napisac program wyznaczajacy dzien tygodnia na podstawie wprowadzonej przez
uzytkownika daty w postaci dnia, miesiaca i roku. W tym celu nalezy wykorzystac ponizsze
wzory:
m=m-2 dla m>=3
m=m+10 dla m<3
r=r dla m>=3
r=r-1 dla m<3
f=d+r +rk/4-2rp+rp/4+(26-2)/10
gdzie:
rp – dwie pierwsze cyfry z r1
rk – dwie ostatnie cyfry z r1
Obliczenie wyrazenia (7 + f) % 7 da w wyniku cyfre reprezentujaca dziea tygodnia.
Zastosowaæ instrukcjê switch, która zamieni otrzymane cyfry w nazwy poszczególnych dni (0
– niedziela, 1 – poniedzia³ek, itd.).
*/
#include <stdio.h>
int main (void)
{
   int dzien, miech, r,rp,rk,f;
   puts ("wprowadz dzien, miesiac, rok: ");
   scanf("%d%d%d",&dzien, &miech, &r);


   rp=r/100;
   rk=r%100;

   if      (miech>=3) {miech=miech-2; r=r;}
   else if (miech<3)  {miech=miech+10; r+=-1;}
   f=dzien+rk+rk/4-2*rp+rp/4+(26*miech-2)/10;

   switch((7 + f)%7)
   {
       case(1): puts("poniedzialek");
       break;
       case(2): puts("wtorek");
       break;
       case(3): puts("sroda");
       break;
       case(4): puts("czwartek");
       break;
       case(5): puts("piatek");
       break;
       case(6): puts("sobota");
       break;
       case(7): puts("niedziela");
       break;
       default: puts("blad?");
   }
   printf("%d %d", rp,rk);
   return 0;
}

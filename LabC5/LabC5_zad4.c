/* Zad. 4 Stoper
Napisać program zawierający 2 funkcje:
 pierwsza – zatrzymująca na krótką chwilę działanie programu, które będzie realizowane
za pomocą pętli for wykonującej się 25E6 razy,
 druga z parametrami określającymi zakres wyświetlanych liczb (początek i koniec).
Kolejne liczby powinny być wyświetlane w tym samym miejscu (moŜna to uzyskać stosując
specjalne sekwencje \r lub \b) . Zmodyfikuj drugą funkcję tak aby umoŜliwiała przerwanie
działania stopera po wciśnięciu dowolnego klawisza z klawiatury.
*/
#include <stdio.h>
void pauza()
{
    int i;
  for (i=1;i<=25E6;i++) {}
}
int zakres()
{
    int j,k,a, b,c=0;
   printf ("Wprowadz dwie liczby: \n");
   scanf("%d", &a);
   scanf("%d", &b);

   if (a>b) {c=a;a=b;b=c;}
   printf ("************************\n");
   printf ("a=%d\nb=%d\n", a, b);

   for (j=a,k=0;j<=b;j++,k++)
   {
   printf("%d\r",a+k);
   pauza();
   }
}


int main (void)
{
 puts("\tStoper\n");
 zakres();
   return 0;
}

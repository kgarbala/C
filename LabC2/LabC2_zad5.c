/* Zad. 5 Wyznaczenie starszej daty
Napisać program, w którym wczytywane są dwie daty, kazda w postaci 3 liczb całkowitych
(dzień, miesiąc, rok) i sprawdzający czy pierwsza data jest wcześniejsza od drugiej.
*/
#include <stdio.h>
int main (void)
{
    int r1,r2,m1,m2,d1,d2;
   puts ("Wprowadz pierwsza date w postaci: rok, miesiac, dzien: ");
   scanf("%d%d%d", &r1,&m1,&d1);
   puts ("Wprowadz pierwsza date w postaci: rok, miesiac, dzien: ");
   scanf("%d%d%d", &r2,&m2,&d2);
   if(r1>r2)       printf("Druga data jest starsza");
   else if (r1<r2) printf("Pierwsza data jest starsza");
   else if (m1>m2) printf("Druga data jest starsza");
   else if (m1<m2) printf("Pierwsza data jest starsza");
   else if (d1>d2) printf("Druga data jest starsza");
   else if (d1<d2) printf("Pierwsza data jest starsza");
   else            printf("daty sa takie same");
   return 0;
}

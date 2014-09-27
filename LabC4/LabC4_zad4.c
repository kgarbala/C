/* Zad. 4 Ograniczona tablica kodów ASCII
Wczytać dwie liczby całkowite a, b naleŜące do przedziału [33, 255]. Wyprowadzić na ekran
znaki o kodach ASCII, zawartych w przedziale [a, b], wierszami po 12 znaków
w wierszu. KaŜdy znak wyprowadzić na 6 polach w formacie: znak, myślnik, kod ASCII,
spacja, np. A - 65, a - 97, d -100.
*/
#include <stdio.h>
int main (void)
{
    int i,k,a,b;
    k=0;
   puts ("\tOgraniczona tablica kodow ASCII\n");
   puts("Podaj dwie liczby z przedzialu [33,255]");
   scanf("%d%d", &a,&b);
   for (i=a;i<=b;i++)
   {
       printf(" %c - %d ",i,i);
       k+=1;
       if (k%12==0)
        puts("");
   }
   return 0;
}

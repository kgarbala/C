/* Zad. 1 Znajdowanie liczby największej
Napisać program umozliwiający uzytkownikowi wprowadzenie z klawiatury 3 liczb
całkowitych, a następnie wyświetlający na ekranie największą z nich.
*/
#include <stdio.h>
int main (void)
{
    int x,y,z,mini;
    printf("Wprowadz 3 liczby:\n ");
    scanf("%d%d%d",&x, &y,&z);
    if (x>=y && x>=z) printf("najwieksza to x=%d", x);
    else if (y>=x && y>=z) printf("najwieksza to y=%d", y);
    else printf("najwieksza to z=%d", z);
   return 0;
}

/*Zad. 4 Konwersja czasu
Dany jest czas w sekundach (liczba całkowita), który należy przekształcić i wyświetlić na
ekranie w postaci godzin, minut i sekund. W oknie konsolowym powinien pojawić się
komunikat: ”XXXX sekund jest równowaŜne XX godzin, XX minut i XX sekund”.
*/
#include <stdio.h>
int main (void)
{
   int czas,h,m,s;
   printf("wprowadz czas w formacie xxxx: ");
   scanf("%d", &czas);

   h=czas/3600;
   m=czas%3600/60;
   s=czas%3600%60;
   printf("%d sekund jest rownowazne %d godzin, %d minut i %d sekund", czas,h, m,s);
   return 0;
}

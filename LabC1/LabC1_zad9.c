/*Zad. 9 Konwersja miar długości
Napisać program czytający z klawiatury 2 liczby całkowite, z których:
1)pierwsza reprezentuje czas dnia w systemie 24 godzinnym, np. 1215 oznacza kwadrans po
godz. 12
2)druga liczba to czas trwania, wyrazony w tej samej formie co liczba pierwsza, np. 345
oznacza 3 godziny i 45 minut
Program ma za zadanie zsumować oba czasy i wynik wyświetlić w tej samej notacji, np.
1245 + 345 = 1630 lub 2300 + 200 = 100.
*/
#include <stdio.h>
int main (void)
{
    int T=1015, czas=345, suma1,h, suma;
   puts ("Podaj czas poczatkowy: \n");
   //scanf("%d", &T);
   puts ("Podaj czas trwania: \n");
   //scanf("%d", &czas);
   suma1=(T%100+czas%100)%60;
   suma=(T/100+czas/100+(T%60+czas%60)/60)%2400;
   h=(T%60+czas%60)/60;

   printf("Wynik: %d%d", suma,suma1);
}

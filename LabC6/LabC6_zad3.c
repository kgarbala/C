/* Zad. 3 Tablica struktur – implementacja prostej bazy danych
Napisać program, wykonujący operacje na tablicy struktur zawierającej dane N studentów:
nazwisko, nr grupy, 3 oceny z egzaminów (tablica), informacja o przyznanym stypendium
(tak, nie). Kolejne części programu powinny realizować następujące czynności:
 deklaracja typów wyliczeniowych: zdał oraz stypendium zawierających dwie moŜliwości:
tak i nie
 deklaracja struktury student
 implementacja funkcji wyświetlającej w kolumnach (nazwisko, grupa, średnia) dane
wszystkich studentów (parametr wejściowy: struktura student, wynik funkcji: wartość
typu wyliczeniowego)
 implementacja funkcji sprawdzającej czy dany student zaliczył wszystkie egzaminy na
ocenę co najmniej 3.0 (parametr wejściowy: struktura student, wynik funkcji: wartość
typu wyliczeniowego)
 implementacja funkcji, która wypełni wartością enumeryczną pole struktury bazy danych
przechowujące informacje o przyznaniu stypendium; warunkiem otrzymania stypendium
jest pozytywne zdanie wszystkich egzaminów oraz uzyskanie średniej większej niŜ
średnia całej grupy (parametr wej./wyj.: tablica struktur student)
 w funkcji main() naleŜy zainicjować tablicę struktur danymi, oraz w przejrzysty sposób
wyświetlić dane przedstawiając je w kolejnych oknach konsoli: lista wszystkich
studentów, lista studentów, którzy zaliczyli sesję oraz lista studentów, którzy otrzymali
stypendium.
*/
#include <stdio.h>
int main (void)
{
   puts ("Hello World!");
   return 0;
}
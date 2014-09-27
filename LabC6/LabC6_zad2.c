/* Zad. 2 Wybrane operacje na tablicy dwuwymiarowej
Opracować program realizujący podstawowe operacje na macierzy - tablicy dwuwymiarowej,
kwadratowej o wymiarach 5x5 zawierającej liczby całkowite z przedziału 0 - 9. Kod kaŜdej
operacji powinien znajdować się w osobnej funkcji:
 generowanie liczb pseudolosowych i umieszczenie ich w tablicy (parametr wyjściowy
funkcji: tablica dwuwymiarowa)
 wyświetlenie zawartości tablicy (parametr wejściowy funkcji: tablica dwuwymiarowa)
 obliczenie sum liczb dla poszczególnych wierszy i umieszczenie wyników w dodatkowej
tablicy (parametr wejściowy: macierz, parametr wyjściowy: tablica jednowymiarowa)
 obliczenie średnich z liczb znajdujących się w poszczególnych kolumnach i zapis
wyników w wektorze (parametr wejściowy: macierz, parametr wyjściowy: tablica
jednowymiarowa)
 obliczenie sumy elementów nad główną przekątną, na głównej przekątnej oraz pod
główną przekątną oraz zwrócenie wyników za pomocą parametrów wyjściowych
(wskaźników)
 wywołanie wszystkich zdefiniowanych funkcji w programie głównym – funkcji main().
Wskazówka: Do generowania liczb pseudolosowych wykorzystać funkcję rand(). Przed jej
uŜyciem naleŜy zainicjować generator liczb pseudolosowych wywołując funkcję srand(). W
celu zapewnienia unikalności generowania kolejnych liczb do funkcji srand() naleŜy
przekazać wartość zwracana przez funkcję time(NULL).
*/
#include <stdio.h>
int main (void)
{
   puts ("Hello World!");
   return 0;
}
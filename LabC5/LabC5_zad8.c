/* Zad. 8 Konwersja odległości
Skonstruować program zawierający funkcję zamieniającą odległość podaną w kilometrach
(parametr wejściowy) na mile lądowe (parametr wyjściowy) oraz mile morskie (parametr
wyjściowy). W funkcji main() naleŜy wprowadzić z klawiatury odległość w kilometrach,
wywołać funkcję konwertującą wczytaną odległość na mile lądowe i morskie oraz wyświetlić
te liczby na ekranie.
Wskazówka: 1 mila lądowa = 1609,344 metrów, 1 mila morska = 1851,852 metrów.
*/
#include <stdio.h>
float mila(float x)
{
    float mila_ladowa, mila_morska;
  mila_ladowa=x/1.609344;
  mila_morska=x/1.851852;
  printf("%0.3f km to %0.3f mil ladowych i %0.3f mil morskich\n",x,mila_ladowa, mila_morska);
}

int main (void)
{
    float x;
   puts ("\tKonwersja odleglosci\n");
   printf("Podaj odlekgosc w kilometrach:\n");
   scanf("%f",&x);
   mila(x);
   return 0;
}

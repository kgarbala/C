/* Zad. 1 Kalkulator czterodziałaniowy dwuargumentowy
Napisać program, w którym naleŜy wprowadzić z klawiatury 2 liczby rzeczywiste oraz znak
(+, -, *, /) reprezentujący operację arytmetyczną, która będzie realizowana na podanych
liczbach. W rezultacie w oknie konsolowym powinien pojawić się komunikat w postaci:
Suma liczb X i Y wynosi Z.
Uwaga: Program powinien odpowiednio zabezpieczyć przypadek wprowadzenia innego
znaku niŜ czterech wyŜej wymienionych.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int x,y;
    char znak;
   puts ("Wprowadz znak: ");
   scanf("%c",&znak);

   return 0;
}

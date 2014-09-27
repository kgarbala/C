/* Zad. 6 Identyfikacja znaków
Napisać program klasyfikujący wprowadzane z klawiatury znaki i wyświetlający w rezultacie
jeden z podanych napisów:
 duŜa litera,
 mała litera,
 cyfra,
 znak przestankowy,
 znak specjalny: Esc, Enetr, Backspace,
 inny znak.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char znak;
printf("wcisnij klawisz:");
znak=getchar();
printf("Nacisnij %c \n",znak);

if (znak>='a' && znak <='z')
  printf("mala litera");
    else if (znak >='A' && znak<='Z')
              printf("duza litera");
        else if (znak >='0' && znak<='9')
            printf("cyfra");
                else if (znak =='.' || znak==',' || znak=='?')
                    printf("interpunkcja");
                    else if (znak ==27 || znak ==13 || znak ==8 )
                        printf ("escapy");

    return 0;
}

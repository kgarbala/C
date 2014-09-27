/*Zad. 5 Obliczanie czasu trwania zajęć
Napisać program obliczający czas trwania zajęć. Danymi wejściowymi dla tej aplikacji niech
będą odpowiednio godzina, minuta, sekunda dla czasu początkowego i końcowego.
*/
#include <stdio.h>
int main (void)
{
    int hp,mp,sp;
    int hk,mk,sk;
    hp=14; mp=15;sp=30;
    hk=15; mk=20;sk=40;
   printf ("czas trwania zajec to: %d godzin, %d minut, %d sekund", hk-hp,mk-mp,sk-sp);
   return 0;
}

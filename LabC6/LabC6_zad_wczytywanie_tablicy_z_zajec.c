#include <stdio.h>
#include <stdlib.h>
#define N 3
/* Wczytywanie tablicy */
void wczytaj(int t[])
{
int i=0;
for (;i<N;i++)
{
printf("Podaj %d liczbe:",i+1);
scanf("%d", &t[i]);
}
}
int main()
{
int tab[N];
wczytaj(tab);
int i;
printf("Tab=");
for (i=0;i<N;i++)
printf("%3d", tab[i]);
return 0;
}

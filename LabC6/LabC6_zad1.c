/* Zad. 1 Przetwarzanie tablicy jednowymiarowej
Napisać program wykonujący wybrane operacje na wektorze (tablicy jednowymiarowej)
przechowującym 10 liczb całkowitych. Implementacja kaŜdej operacji powinna znaleźć się w
osobnej funkcji. Kolejne funkcje powinny wykonywać następujące czynności:
 wczytanie elementów (tablica przekazywana jako parametr funkcji)
 wyświetlenie zawartości tablicy (parametry wejściowe funkcji: tablica oraz kolejność
wyświetlania: 0 – normalna, 1 – odwrotna)
 szukanie największej i najmniejszej liczby (parametr wejściowy: tablica, 2 parametry
wyjściowe – przekazujące do funkcji wywołującej wartość najmniejszą i największą)
 obliczenie średniej arytmetycznej i geometrycznej (parametr wejściowy: tablica, 2
parametry wyjściowe – przekazujące do funkcji wywołującej obliczone średnie)
 posortowanie tablicy (parametr wej/wyj: tablica)
 wywołanie w programie głównym (main()) wszystkich zdefiniowanych funkcji: wczytaj,
wyświetl, wyświetl w kolejności odwrotnej, znajdź min i max, oblicz średnie, posortuj
oraz wyświetl posortowaną zawartość wektora.
Wskazówka: rozmiar wektora naleŜy ustalić za pomocą dyrektywy preprocesora #define.
*/
#include <stdio.h>
#include <math.h>
#define N 10
#define MM 4
void napis() {puts ("\tPrzetwarzanie tablicy jednowymiarowej\n");}
int tab[N],S[N];
int i,k;
int t[N];
int poz_mini=999;

void wczytaj(int t[])
{
    puts("****************WCZYTYWANIE***********************");
    for (i=0;i<N;i++)
    {
        printf("Podaj %d liczbe:",i+1);
        scanf("%d", &t[i]);
    }
}
void wyswietl(int t[])
{
    //printf("1: kolejnosc normalna\n2: kolejnosc odwrotna\n");
    //int k;
    //scanf("%d", &k);
   //    int tab[N];
  // wczytaj(tab);i=N-1;i>=0
   puts("****************WYSWIETLANIE***********************");
   printf("1: kolejnosc normalna\n2: kolejnosc odwrotna\n");
   scanf("%d", &k);
    switch(k)
    {
        case(1): {printf("tab= "); for (i=0;i<N;i++)    printf("%3d", t[i]);} break;
        case(2): {printf("tab= "); for (i=N-1;i>=0;i--) printf("%3d", t[i]);} break;
        default: {printf("tylko 1 lub 2 dozwolone\n");return main();}
    }
    puts("");
    //max_min();
}

int max_min(int t[])
{
    puts("*******************MIN_MAX************************");
    int maks=tab[0], mini=tab[0],poz_maks=0, poz_mini=0;
    for (i=0;i<N;i++)
    {
        if (t[i]>maks) {maks=t[i];poz_maks=i+1;}
        if (t[i]<mini) {mini=t[i];poz_mini=i+1;}
    }
    return printf("minimum na pozycji %d =%d\nmaximum na pozycji %d =%d\n",poz_mini, mini, poz_maks, maks);
}
int srednia(int t[])
{
    puts("*******************SREDNIE*************************");
    float A=0, G=1;
    for (i=0;i<N; i++)
    {
        A+=t[i];
        G*=t[i];
    }
    return printf("Srednia arytmetyczna=%0.2f\nSrednia geometryczna=%0.2f\n", A/(N), pow(G,1.0/(N)));
}
int sortowanie(int t[])
{
    puts("*******************SORTOWANIE*************************");


int j,k;
int maks,id;
    for(i=0;i<N;i++)
    {
        maks=t[i];
          for (j=i;j<N;j++)    {if (t[j]>=maks) {maks=t[j];id=j;}/*printf("T[%d]=%d\n",j+1, t[i])*/}
          k=t[i]; t[i]=t[id]; t[id]=k;
    }
puts("Posortowana tablica:");
{for(i=0;i<N;i++) printf("t[%d]=%d\n",i,t[i]);}
}

int main (void)
{
   napis();
   wczytaj(tab);
   wyswietl(tab);
   max_min(tab);
   srednia(tab);
   sortowanie(tab);
   return 0;
}

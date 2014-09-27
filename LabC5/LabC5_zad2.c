/* Zad. 2 Liczby pierwsze
Napisać program zawierający funkcję, która sprawdza czy liczba będąca jej argumentem jest
liczbą pierwsza. Wynik typu logicznego powinien być przekazywany na zewnątrz funkcji do
programu ją wywołującego za pomocą instrukcji powrotu return.
*/
#include <stdio.h>



int n;

int pier(n)
{

    int i,test;
    test=1;
    for (i=2;i<n;i++)
    {

       if (n%i==0)
       {
           printf("%d to nie liczba pierwsza\n\n",n);
           test=0;
           break;
       }
        else if (i==n-1)
            printf("%d to liczba pierwsza\n\n",n);
            test=1;

    }
    return printf("Test=%d\n",test);
}


int main (void)
{
   puts ("\tLiczby pierwsze\n");
   puts ("Podaj liczbe do sprawdzenia:");
   scanf("%d", &n);
   pier(n);
   return 0;
}

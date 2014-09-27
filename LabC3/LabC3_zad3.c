/* Zad. 3 Identyfikowanie samoglosek, spólglosek i znaków obcych
Program ma sprawdzac czy wprowadzony z klawiatury znak jest samogloska, spólgloska,
litera obca czy innym znakiem. Ponadto powinien on uwzgledniac zarówno wielkie jak male
litery.
*/
#include <stdio.h>
int main (void)
{
    char znak;
   puts ("wprowadz znak: ");
   scanf("%c", &znak);
      if (znak>=65 && znak<=90)
      {
   switch (znak)
   {
      case('A'):
      case('E'):
      case('Y'):
      case('U'):
      case('I'):
      case('O'):
      printf("samogloska duza");
      break;
      case('Q'):
      case('X'):
      printf("duzy znak obcy");
      break;
      default: printf("spolgloska duza");
   }
      }
   else if (znak>=97 && znak<=122)
   {
       switch (znak)
       {
      case('a'):
      case('e'):
      case('y'):
      case('u'):
      case('i'):
      case('o'):
      printf("samogloska mala");
      break;
      case('q'):
      case('x'):
      printf("maly znak obcy");
      break;
      default: printf("spolgloska mala");
       }
   }
   else printf("inny znak");
   return 0;
}

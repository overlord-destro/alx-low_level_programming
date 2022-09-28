#include <stdio.h>

void _putchar(char *s)

{

	

   if (*s != '\0')

   {

       putchar(*s);

       _putchar(s + 1);

   }    

   else

       putchar('\n');

}

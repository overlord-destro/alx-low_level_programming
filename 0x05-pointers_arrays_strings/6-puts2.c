#include "main.h"
/**
*puts2 - prints out every other character of a string then newline
*
*@str: string to be printed
*
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

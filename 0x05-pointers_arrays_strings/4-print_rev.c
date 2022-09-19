#include "main.h"
/**
*_strlen - find the length of a string
*
*@s: string to be checked
*
*Return: returns length of string
*
*
*/
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
/**
*print_rev - prints a string in reverse
*
*@s: string to be printed in reverse
*/
void print_rev(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}

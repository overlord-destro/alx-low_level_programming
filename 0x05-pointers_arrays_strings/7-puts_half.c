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
*puts_half - prints the second half of a string
*
*@str: string to be halved
*
*/
void puts_half(char *str)
{
	int i = 0, len;

	len = _strlen(str);
	if (len % 2 != 0)
	{
		for (i =(len / 2) - 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}

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

#include "main.h"
/**
*_strchr - finds first occurence of character in string
*@s: string to be searched
*@c: character we are searching for
*Return: pointer to c if found else null
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		else
			return ('\0');
		i++;
	}
}

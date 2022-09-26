#include "main.h"
/**
*_strchr - finds first occurence of character in string
*@s: string to be searched
*@c: character we are searching for
*Return: pointer to c if found else null
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return ('\0');
}

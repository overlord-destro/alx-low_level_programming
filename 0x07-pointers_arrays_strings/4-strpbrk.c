#include "main.h"
/**
*_strpbrk - searches string for any bytes
*@s: string to be searched
*@accept: bytes searching for
*Return: pointer to byte if found else null
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

#include "main.h"
/**
*_strspn - gets length of prefix substring
*
*@s: stirng
*@accept: bytes taken from here
*
*Return: number of bytes
*
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				i++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

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
	unsigned int a, b, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == accept[b])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (1);
}

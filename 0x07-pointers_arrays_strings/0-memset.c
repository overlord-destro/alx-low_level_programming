#include "main.h"
/**
*_memset - fills first n bytes of memory with constant byte
*
*@s: string to be filled
*@b: constant byte
*@n: number of bytes to fill
*
*Return: pointer to s
*/
char *_memset(char *s, char b, unisgned int n)
{
	unsigned int i;

	for (i = 0, i < n, i++)
	{
		*(s + i) = b;
	}
	return (s);
}

#include "main.h"
/**
*_memcpy - copies bytes from one memory area to another
*@dest: destination
*@src: source
*
*@n: number of bytes to copy
*
*Return: to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

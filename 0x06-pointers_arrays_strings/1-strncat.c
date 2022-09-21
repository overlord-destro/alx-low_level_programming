#include "main.h"
/**
*_strncat - joins 2 strings using at most n bytes from src string
*
*@dest: destination
*@src: source
*
*@n: number of bytes to use
*
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

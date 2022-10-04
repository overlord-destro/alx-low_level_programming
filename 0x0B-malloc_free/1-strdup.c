#include "main.h"
#include <stdlib.h>
/**
*_strdup - duplicates a string a pointer in memory
*@str: string to be duplicated
*Return: ptr to created memory space or null
*
*/
char *_strdup(char *str)
{
	char *arr;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		j++;
	}
	arr =(char *)malloc(sizeof(char) * (j + 1));
	if (arr == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}


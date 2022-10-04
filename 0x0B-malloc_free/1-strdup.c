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
	int i = 0;

	arr = malloc(sizeof(str) + 1);
	free(arr);
	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}


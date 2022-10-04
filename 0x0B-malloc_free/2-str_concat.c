#include "main.h"
#include <stdlib.h>
/**
*str_concat - joins 2 strings together
*@s1: string one
*@s2: string two
*Return: returns pointer to new char
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0, j = 0, k = 0, l = 0;

	while (*s1)
		i++;

	while (*s2)
		j++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	arr = (char *)malloc(sizeof(char) * (i + j + 1);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	while (k < i)
	{
		arr[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		arr[k] = s2[l];
		k++;
		l++;
	}
	return (arr);
}

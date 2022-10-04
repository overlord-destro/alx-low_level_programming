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
	int i, j, k = 0, l;

	for (i = 0; s1[i] != 0; i++)
		;

	for (j = 0; s2[j] != 0; j++)
		;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	arr = malloc(sizeof(char) * (i + j + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (k = 0; k < i; k++);
		arr[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++,, j++)
		arr[k] = s2[j];
	return (arr);

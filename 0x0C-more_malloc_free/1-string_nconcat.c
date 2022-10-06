#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - adds 2 strings in newly created pointer
*@s1: first string
*@s2: second string
*@n: number of bytes to combine from s2
*Return: pointer to newly allocated memory containing both strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
	{
		str[k] = s1[k]
	}
	for (l = 0; l < n; l++)
	{
		str[k] = s2[l];
	}
	str[k] = '\0';
	return (str);
}

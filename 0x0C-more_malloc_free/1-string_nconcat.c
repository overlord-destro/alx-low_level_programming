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
	unsigned int i, j, k;

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

	for (k = 0; k < i + n; k++)
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];

	str[k] = '\0';
	return (str);
}

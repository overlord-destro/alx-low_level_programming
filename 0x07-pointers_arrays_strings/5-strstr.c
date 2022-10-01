#include "main.h"
/**
*_strstr - finds first occurance of a substirng
*@haystack: string to be searched
*@needle: sub string we are searching for
*Return: pointer to fisrt occurence of substring else null
*/
char *_strstr(char *haystack, char *needle)
{
	char *aystack, *eedle;

	while (*haystack)
	{
		aystack = haystack;
		eedle = needle;

		while (*haystack != '\0' && *eedle != '\0' && *haystack == *eedle)
		{
			haystack++;
			eedle++;
		}
		if (!eedle)
			return (aystack);
		haystack = aystack + 1;
	}
	return ('\0');
}

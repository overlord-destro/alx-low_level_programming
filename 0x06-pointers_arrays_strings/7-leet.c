#include "main.h"
/**
*leet - encodes string to 1337
*@s: string to be encoded
*Return: string encoded
*
*
*/
char *leet(char *s)
{
	int i = 0, j;
	int low_alp[] = {97, 101, 111, 116, 108};
	int up_case[] = {65, 69, 79, 84, 76};
	int code[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low_alp[j] || s[i] == up_case[j])
			{
				s[i] = code[i];
				break;
			}
		}
		i++;
	}
	return (s);
}

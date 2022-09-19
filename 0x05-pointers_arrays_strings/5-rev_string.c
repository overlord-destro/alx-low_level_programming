#include "main.h"
/**
*rev_string - reverese string
*
*@s: string to be reversed
*
*/
void rev_string(char *s)
{
	int count = 0, a, b;
	char *str, hold;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (a = 0; a < (count - 1); i++)
	{
		for (b = i + 1; b > 0; b--)
		{
			hold = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = hold;
		}
	}
}


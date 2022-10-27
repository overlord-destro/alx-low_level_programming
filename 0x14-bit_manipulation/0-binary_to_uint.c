#include "main.h"
/**
*binary_to_uint - convertsa binary number to decimal
*@b: string containing binary number
*Return: returns an unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int len, tempbase;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, tempbase = 1; len >= 0; len--, tempbase *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			result += tempbase;
	}

	return (result);
}

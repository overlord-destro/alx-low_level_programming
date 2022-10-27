#include "main.h"
/**
*get_bit - gets value of bit at given index
*@n: long int
*@index: given index
*Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == 1)
			return (n & 1);
	}

	return (-1);
}

#include "main.h"
/**
*clear_bit - sets the value of a bit to 0
*@n: long int
*@index: index
*Return: 1 on success and -1 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	if (*n & m)
		*n ^= m;

	return (1);
}

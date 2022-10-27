#include "main.h"
/**
*set_bit - sets bit at index to 1
*@n: long int n
*@index: index of bit to be set to 1
*Return: returns 1 on success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);
	return (1);
}

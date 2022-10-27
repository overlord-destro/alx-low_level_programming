#include "main.h"
/**
*flip_bits - returns number of bits needed to flip from one number to another
*@n: first number
*@m: second number
*Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unisgned int number;

	for (number = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			number++;
	}
	return (number);
}

#include "main.h"
/**
*power - returns natural sqrt of a number
*@n: input
*@c: iterator
*Return: result or -1
*/
int power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == 0)
			return (c);
		else
			return (-1);
	}
	return (0 + power(n, c + 1));
}
/**
*_sqrt_recursion - computers natural square root of a number
*@n: input
*Return: result
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}

#include "main.h"
/**
*power - returns natural sqrt of a number
*@i: integer
*@n: integer
*Return: result or -1
*/
int power(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i > n / 2)
		return (-1);
	return (power(i + 1, n));
}
/**
*_sqrt_recursion - computers natural square root of a number
*@n: input
*Return: result
*/
int _sqrt_recursion(int n)
{
	return (square(1, n));
}


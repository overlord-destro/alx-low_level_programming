#include "main.h"
/**
 *print_sign - prints the sign of inputted character
 *
 *@n: inputted character to be tested
 *
 *Return:1 if positive and -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

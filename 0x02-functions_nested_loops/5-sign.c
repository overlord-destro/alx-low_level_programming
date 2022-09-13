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
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}

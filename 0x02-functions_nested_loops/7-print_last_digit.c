#include "main.h"
/**
 *print_last_digit - prints the last digit of an integer
 *
 *@n: the integer to be worked upon
 *
 *Return: last digit
 *
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (n > 0)
	{
		_putchar(c + 48);
		return (c);
	}
	else
	{
		_putchar(-c + 48);
		return (-c);
	}
}

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
	if (n > 0)
		return (n % 10);
	else
		return ((-1 * n) % 10);
}

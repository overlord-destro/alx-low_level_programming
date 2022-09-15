#include "main.h"

/**
*more_numbers - prints 10 times the numbers from 0-14
*
*
*
*
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}

#include "main.h"
/**
*print_diagonal - prints a diagonal line n number of times
*
*@n: number of times diagonal should be printed
*
*
*
*/
void print_diagonal(void)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
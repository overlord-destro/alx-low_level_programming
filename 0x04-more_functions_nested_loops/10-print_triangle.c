#include "main.h"
/**
*print_triangle - prints triangle
*
*@size: number oflines
*
*
*
*/
void print_triangle(void)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		for (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

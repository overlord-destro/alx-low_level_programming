#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints for given natural number to 98
 *
 *@n: number to start from
 *
 *
 *
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	putchar('\n');
}

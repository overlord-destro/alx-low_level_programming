#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - prints numbers
*@separator: separator string
*@n: number of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arr, int));
		if (i == (n - 1))
			continue;
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
}

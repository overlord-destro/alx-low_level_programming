#include "variadic_functions.h"
#include <stdio.h>
/**
*print_strings - prints strings
*@separator: separator strings
*@n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;
	char *str;

	va_start(arr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i == (n - 1))
			continue;
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
}

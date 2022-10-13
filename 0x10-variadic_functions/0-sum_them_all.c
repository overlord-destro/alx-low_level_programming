#include "variadic_functions.h"

/**
*sum_them_all - sums up all parameters provided
*@n: number of values to be summed
*
*Return: returns sum or 0 if number of values is 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arr, int);

	va_end(arr);

	return (sum);
}

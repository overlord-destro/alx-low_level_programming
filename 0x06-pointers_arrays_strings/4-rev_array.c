#include "main.h"
/**
*reverse_array - reverses array of integers
*@a: array to be reversed
*@n: number of elements in array
*
*
*/
void reverse_array(int *a, int n)
{
	int i, j, holder;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			holder = a[j];
			a[j] = a[j - 1];
			a[j - 1] = holder;
		}
	}
}

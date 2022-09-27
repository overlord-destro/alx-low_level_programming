#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of diagonals of 2 square matrices
*@a: input
*@size: size of matrix
*
*
*
*/
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			s1 += a[i];
		if (i % (size - q) == 0 && i != 0 && i < (size * size) - 1)
			s2 += a[i];
	}
	printf("%d, %d\n", s1, s2);
}

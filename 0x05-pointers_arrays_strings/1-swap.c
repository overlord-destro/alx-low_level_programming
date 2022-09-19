#include "main.h"
/**
*swap_int - swaps 2 variables positions
*
*@a: first variable to b swapped
*
*@b: second variable to be swapped
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

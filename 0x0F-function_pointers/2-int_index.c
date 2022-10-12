#include "main.h"
/**
*int_index - checks for an the first occurence of an integer in an array
*@array: array to be checked
*@size: size of the array
*@cmp: function that compares int
*Return: returns index of firts occurence of int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	int i, r;

	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
	return (-1);
}

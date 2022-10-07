#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: minimum value of array
*@max: maximum value of array
*Return: returns pointer to created array
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i < (max + 1); i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}

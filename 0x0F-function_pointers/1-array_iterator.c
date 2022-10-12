#include "function_pointers.h"
/**
*array_iterator - executes one function on an array of elements
*@array: array the function will be used on
*@size: size of the array
*@action: the function we are executing on the array
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - allocates memory using malloc
*
*@b: size to allocate
*
*Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);

	return (arr);
}

#include "main.h"
#include <stdlib.h>
/**
*_realloc - reallocates memory used by previous pointer
*@ptr: pointer to previous allocated memory
*@old_size: bytes saved in old memory
*@new_size: bytes to be used in new pointer
*Return: returns pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}

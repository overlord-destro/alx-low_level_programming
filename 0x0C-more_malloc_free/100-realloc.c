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
	unsigned int csize;

	if (new_size > old_size)
		csize = old_size;
	else if (new_size == old_size)
		return (ptr);
	else
		csize = new_size;

	if (ptr == NULL)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	free(ptr);

	ptr = malloc(csize);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

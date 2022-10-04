#include "main."
#include <stdlib.h>
/**
*create_array - creates array of size
*@size: size of array
*@c: characte to initialize with
*Return: pointer to the array or null
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	while (i < size)
	{
		c[i] = c;
		i++;
	}
	return (arr);
}

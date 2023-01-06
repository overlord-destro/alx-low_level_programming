#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - Function that creates hash table
* @size: Size of the array
* Return: Pointer to the new Hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i = 0;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
		return (NULL);
	for (; i < size; i++)
		new_hash_table->array[i] = NULL;

	return (new_hash_table);
}

#include "hash_tables.h"
/**
* hash_table_delete - function that deletes a hash table.
* @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *list;

	for (; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			list = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = list;
		}
	}
	free(ht->array);
	free(ht);
}


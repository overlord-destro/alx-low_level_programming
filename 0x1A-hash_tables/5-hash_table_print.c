#include "hash_tables.h"

/**
*hash_table_print - prints a hash table
*@ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int idx = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");

	for (; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			i = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}

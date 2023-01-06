#include "hash_tables.h"

/**
*hash_table_print - prints a hash table
*@ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	char *delim;

	if (ht == NULL)
		return;

	printf("{");
	delim = "";

	printf("{");
	delim = "";

	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", delim, temp->key, temp->value);
			delim = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}

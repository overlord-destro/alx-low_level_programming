#include "hash_tables.h"

/**
* hash_table_get - Function that retrieves a value associated with a key
* @ht: hash table to search
* @key: key to search with
* Return: value associated with the element on success and NULL on failure
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];
	if (temp == NULL)
		return (NULL);

	while (strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	return (temp->value);
}

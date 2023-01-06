#include "hash_tables.h"
/**
* key_index - returns the index of a key
* @key: the key
* @size: size of an array of the hash table
*
* Return: the index of the key in the table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}

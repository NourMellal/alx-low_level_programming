#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a
 *  value associated with a key in a hash table.
 *
 * Parameters:
 * @ht: a pointer to the hash table.
 * @key: the key to search for in the hash table.
 *
 * Return:- If the key or hash table is NULL,
 *  or if the key is not found, the function returns NULL.
 * - If the key is found, the function returns
 *  the value associated with that key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		return (node->value);
	}
	return (NULL);
}

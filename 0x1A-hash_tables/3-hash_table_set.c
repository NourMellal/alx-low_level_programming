#include "hash_tables.h"

/*
Function name: hash_table_set
Description: The function hash_table_set adds or updates the value of a key in a hash table.
Parameters:
    - ht: the hash table to be manipulated
    - key: the key to be added or updated
    - value: the value to be associated with the key
Return: Returns 1 if successful, 0 if an error occurred
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx, size;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	size = ht->size;
	idx = key_index((const unsigned char *)key, size);


	if(ht->array[idx] != NULL || strcmp(ht->array[idx]->key, key) == 0)
	{
		free (ht->array[idx]->value);
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[idx];
	ht->array[idx] = new;


	return (1);
}

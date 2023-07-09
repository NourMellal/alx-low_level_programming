#include "hash_tables.h"

/**
 * check_collision_in_node - check for collision in the hole list
 * @head: head of the linked list
 * @key: hash table key
 * Return: 1 for success, 0 for failure
 *
*/
hash_node_t *check_collision_in_node(hash_node_t *head, const char *key)
{
	hash_node_t *tmp = head;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp);

		tmp = tmp->next;
	}
	return (tmp);
}

/**
* hash_table_set - Description: The function hash_table_set adds or
* updates the value of a key in a hash table.
* Parameters:
*    @ht: the hash table to be manipulated
*    @key: the key to be added or updated
*    @value: the value to be associated with the key
* Return: Returns 1 if successful, 0 if an error occurred
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	unsigned long int idx, size;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	size = ht->size;
	idx = key_index((const unsigned char *)key, size);
	tmp = check_collision_in_node(ht->array[idx], key);

	if (tmp)
	{
		tmp->value = strdup(value);
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

#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a ht
 * @ht: pointer to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(head->array);
	free(head);
}

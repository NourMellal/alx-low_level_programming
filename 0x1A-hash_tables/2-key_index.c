#include "hash_tables.h"
/**
 * key_index - Generate a hash table index for a key
 * @key: The key
 * @size: The size of the hash table
 *
 * Using the djb2 hash function, this function generates a hash of the key,
 * then modulates by the size to ensure the result fits within the hash table.
 *
 * Return: The hash table index for this key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

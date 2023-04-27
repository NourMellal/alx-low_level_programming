#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}

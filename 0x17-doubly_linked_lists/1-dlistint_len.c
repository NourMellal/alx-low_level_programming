#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}
	return (list_len);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at
 * a given index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the desired node
 *
 * Return: Pointer to the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *h = head;

	while (h)
	{
		size++;
		h = h->next;
	}
	if (index >= size || head == NULL)
		return (NULL);
	h = head;

	while (h && index != 0)
	{
		h = h->next;
		index--;
	}
	return (h);
}

#include "lists.h"

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

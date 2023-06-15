#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while(h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}

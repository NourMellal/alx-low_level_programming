#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *nxt = NULL;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		free (new);
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		curr = curr->next;
		idx--;
	}

	if (curr->next == NULL)
	{
		free (new);
		return (add_dnodeint_end(h, n));
	}
	else
	{
		nxt = curr->next;
		new->next = nxt;
		new->prev = curr;
		nxt->prev = new;
		curr->next = new;
	}

	return (new);
}

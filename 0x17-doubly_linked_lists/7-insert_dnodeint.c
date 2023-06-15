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

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position in a doubly linked list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index at which the new node should be inserted
 * @n: Data to be stored in the new node
 *
 * Return: Pointer to the newly inserted node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *nxt = NULL;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || idx > dlistint_len(*h))
	{
		free(new);
		return (NULL);
	}
	
	new->n = n;

	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		curr = curr->next;
		idx--;
	}

	if (curr->next == NULL)
	{
		free(new);
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

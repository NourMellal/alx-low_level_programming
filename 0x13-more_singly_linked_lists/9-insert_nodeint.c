#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given
 *  position in a linked list.
 * @head: Double pointer to the head of the linked list.
 * @idx: Index of the position where the new node should be inserted,
 * starting at 0.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if the function fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}

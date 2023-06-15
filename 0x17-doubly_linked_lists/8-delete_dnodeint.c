#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node
 *  at a given index in a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if the deletion is successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp2;

	if (*head == NULL)
		return (-1);

	while (index > 0)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		index--;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp2 = tmp->prev;
		tmp2->next = tmp->next;
		tmp->next->prev = tmp2;
	}
	free(tmp);

	return (1);
}

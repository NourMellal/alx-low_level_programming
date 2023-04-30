#include "lists.h"

/**
 * free_listint2 - Frees a linked list of
 * integers and sets the head pointer to NULL.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

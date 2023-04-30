#include "lists.h"

/**
 * pop_listint - Removes and returns
 * the first element of a linked list of integers.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: The integer value of the removed element.
 *         If the list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *h, *curr;
	int num;

	if (*head == NULL)
		return (0);

	curr = *head;

	num = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (num);
}

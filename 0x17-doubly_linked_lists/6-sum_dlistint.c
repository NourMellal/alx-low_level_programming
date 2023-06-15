#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

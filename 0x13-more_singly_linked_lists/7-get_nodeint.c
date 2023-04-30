#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve, starting at 0.
 *
 * Return: Pointer to the nth node in the list,
 *  or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}

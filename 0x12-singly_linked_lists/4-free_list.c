#include "lists.h"

/**
 * free_list - Frees all the nodes of a linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

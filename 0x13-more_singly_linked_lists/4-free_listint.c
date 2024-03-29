#include "lists.h"

/**
 * free_listint - sets a list free
 * @head: the start of list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

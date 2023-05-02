#include "lists.h"
/**
 * print_listint- prints a node at the end
 * @h: the value of head
 * Return: returns a integer
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		h = h->next;
		counter++;
	}

	return (counter);
}

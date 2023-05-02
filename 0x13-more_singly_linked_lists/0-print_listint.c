#include "lists.h"
/**
 * print_listint- prints a node at the end
 * @h: the value of head
 * Return: returns a integer
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);

}

#include "list.h"
/**
 * print_listint- prints a node at the end
 * @h: the value of head
 * Return: returns a integer
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d",temp->n);
		temp = temp->next;
		counter++;
	}
	print("\n");

	return (counter);
}

#include "lists.h"
/**
 * print_listint- prints a node at the end
 * @h: the value of head
 * Return: returns a integer
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	listint_t *temp =(listint_t *) h;

	while (temp != NULL)
	{
		printf("%d",temp->n);
		temp = temp->next;
		counter++;
		if(temp != NULL)
			printf("\n");
	}
	printf("\n");

	return (counter);
}

#include "lists.h"

/**
 * sum_listint - calculates the sum
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}

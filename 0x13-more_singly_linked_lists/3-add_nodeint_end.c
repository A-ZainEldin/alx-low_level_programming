#include "lists.h"
/**
 * add_nodeint_end- adds a node at the end
 * @head: the starting index
 * @n: the value added
 * Return: returns a pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}

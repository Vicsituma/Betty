#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at end of a listint_t
 * @n: an integer value
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new = malloc(sizeof(listint_t));
	if (!new)
	{
		printf("Error\n");
		return (1);
	}
	new->n = n;
	new->next = NULL;
	if (*head->next == NULL)
		*head = new;
	else
	{
		while (*h->next != NULL)
			*h = *h->next;
		*h->next = new;
	}
	return (new);
}

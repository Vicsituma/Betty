#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a dlistint_t linked list
 * @idx: position where new node should be added starting from 0
 * @n: data(n) for new node
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	temp = *h;

	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;
	return (new);
}

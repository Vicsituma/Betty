#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to list
 * @idx: index on list
 * @n: integer data
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx-1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	copy->next = new;

	return (new);
}

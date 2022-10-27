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
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!*head)
		return (NULL);
	while (*head)
	{
		if (i == idx)
		{
			temp = *head;
			*head = new;
			new->n = n;
			new->next = temp;
		}
		*head = (*head)->next;
		i += 1;
	}
	return (new);
		new = *head;

}

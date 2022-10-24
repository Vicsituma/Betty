#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a node
 * @str: string value
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}

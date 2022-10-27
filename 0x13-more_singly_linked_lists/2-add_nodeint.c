#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: pointer to a node
 * @n: an integer value
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_nodeint(list_t **head, const int n)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

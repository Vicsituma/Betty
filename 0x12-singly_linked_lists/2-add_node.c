#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a node
 * @str: string value
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->next = *head;
	*head = new;

	if (head)
		return (&new);
	else
		return (NULL);
}

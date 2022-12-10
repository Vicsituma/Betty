#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to a dlistint_t list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
		free(head);
}

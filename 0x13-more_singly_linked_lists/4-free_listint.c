#include "lists.h"
/**
 * free_listint - free a list_t list
 * @head: list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head)
		free(head);
}

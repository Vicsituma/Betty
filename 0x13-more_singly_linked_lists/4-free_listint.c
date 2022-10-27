#include "lists.h"
/**
 * free_listint - free a list_t list
 * @head: list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}

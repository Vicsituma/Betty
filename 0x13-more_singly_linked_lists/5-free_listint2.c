#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: a pointer to head
 * Return : none
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	while (*head->next != NULL)
	{
		last = *head->next;
		free(*head);
		*head = last;
	}
	if (*head == NULL)
	{
		printf("(nil)");
	}
}

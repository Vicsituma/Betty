#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: a pointer to head
 * Return : none
 */
void free_listint2(listint_t **head)
{
	listint_t *last;
	listint_t *temp;

	if(head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		last = temp->next;
		free(*head);
		*head = last;
	}
	head = NULL;
}

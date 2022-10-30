#include "lists.h"
/**
 * delete_nodeint_at_index - delete a nodeint at the given index
 * @head: a pointer to a linked list
 * @index: index of node in list
 * Return: (1) success, or (-1) failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i;

	if (*head == NULL)
		return (1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
			*head = (*head)->next;
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (1);
		temp = temp->next;
	}
	if (temp->next == NULL)
		return (-1);
	temp2 = temp->next;
	if (temp2->next == NULL)
	{
		temp->next = NULL;
		return (1);
	}
	else
	{
		temp->next = temp2->next;
		return (1);
	}
	return (-1);
}

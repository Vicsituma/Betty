#include "lists.h"
/**
 * delete_dnodeint_at_index -deletes the node at index of a
 * dlistint_t linked list
 * @head: pointer to dlistint_t linked list
 * @index: position of node to be deleted in the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t tmp;
	unsigned int i = 0;

	if (!head)
		return (-1);
	tmp = *head;
	if (tmp->prev == NULL && index == 0)
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			return (1);
		}
		tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL && i == index)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}

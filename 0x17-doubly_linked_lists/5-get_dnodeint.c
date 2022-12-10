#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to a dlistint_t list
 * @index: index of node to return, starting from 0
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);
	while (head && n < index)
	{
		head = head->next;
		n++;
	}
	return (head);
}

#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to a list
 * Return: sum of data(n) in list
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (!head)
		return (0);
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}

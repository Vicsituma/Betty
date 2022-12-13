#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n)
 * of a dlistint_t linked list
 * @head: pointer to dlistint_t linked linked list
 * Return: sum of data(n) or 0 for empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

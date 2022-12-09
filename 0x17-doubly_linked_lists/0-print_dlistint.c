#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);
}

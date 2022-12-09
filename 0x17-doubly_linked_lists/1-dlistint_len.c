#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: a doubly linked list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

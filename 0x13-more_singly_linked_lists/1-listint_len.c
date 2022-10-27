#include "lists.h"
/**
 * listint_len - prints all the elements of a list_t list.
 * @h: a singly linked list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i += 1;
	}
	return (i);
}

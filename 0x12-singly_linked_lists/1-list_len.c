#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list.
 * @h: a singly linked list
 * Return: lenght of list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i += 1;
	}
	return (i);
}

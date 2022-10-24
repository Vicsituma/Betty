#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: a singly linked list
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i += 1;
	}
	return (i);
}

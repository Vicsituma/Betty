#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: list to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
		free(head);
}

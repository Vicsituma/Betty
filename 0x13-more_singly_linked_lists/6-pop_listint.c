#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if ((*head) == NULL)
		return (1);
	else 
	{
		temp = *head;
		*head = (*head)->next;
		return (temp->n);
	}
}

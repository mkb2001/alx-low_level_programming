#include "lists.h"
/**
 * pop_listint - deletes from linked list
 * @head: the first parameter
 * Return: a number
*/
int pop_listint(listint_t **head)
{
	listint_t *instance;
	int data;

	if (!*head || !head)
		return (0);

	data = (*head)->n;
	instance = (*head)->next;
	free(*head);
	*head = instance;

	return (data);
}

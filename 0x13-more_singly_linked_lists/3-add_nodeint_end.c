#include "lists.h"

/**
* add_nodeint_end - It adds node to the end of a linked list
* @head: it is the first node
* @n: it is the data
* Return: the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *instance = head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (instance->next)
	{
		instance = instance->next;
	}

	instance->next = new;

	return (new);
}

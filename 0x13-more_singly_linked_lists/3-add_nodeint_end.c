#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - function that adds a new node at the
* end of a listint_t list.
* @head: The first node
* @n: The int
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *new;

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
		return (NULL);

	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}

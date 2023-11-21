#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *tocome = NULL;

	while (*head)
	{
		tocome = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = tocome;
	}

	*head = previous;

	return (*head);
}

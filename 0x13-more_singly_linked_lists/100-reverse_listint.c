#include "lists.h"

/**
 * reverse_listint - unction that reverses a listint_t linked list.
 * @head: The first node
 * Return:a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;
	listint_t **curr = head;

	while ((*curr) != NULL)
	{
		next = (*curr)->next;
		(*curr)->next = previous;
		previous = (*curr);
		(*curr) = next;
	}

	*head = previous;

	return (*head);

}

#include "lists.h"
/**
 * free_listint2 - frees and return null
 * @head: the first node
*/
void free_listint2(listint_t **head)
{
	listint_t *instance;

	if (head == NULL)
		return;

	while (*head)
	{
		instance = (*head)->next;
		free(*head);
		*head = instance;

	}

	*head = NULL;
}

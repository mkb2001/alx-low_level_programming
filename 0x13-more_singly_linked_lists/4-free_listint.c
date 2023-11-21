#include "lists.h"

/**
 * free_listint - this frees the space from the heap
 * @head: this is the first node
*/

void free_listint(listint_t *head)
{
	listint_t *instance;

	while (head)
	{
		instance = head->next;
		free(head);
		head = instance;

	}
}

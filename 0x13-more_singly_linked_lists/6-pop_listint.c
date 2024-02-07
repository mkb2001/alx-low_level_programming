#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list, and
* returns the head node’s data (n).
* @head: The First node
* Return:  the head node’s data (n),  if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

		if (!(*head))
		return (0);

	tmp = (*head)->next;

	n = (*head)->n;
	free((*head));
	*head = tmp;


	return (n);
}

#include "lists.h"
/**
* delete_nodeint_at_index - this deletes the node at an index
* @head: the first node
* @index: the position of the node to delete
* Return: the data.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *instance = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(instance);
		return (1);
	}

	while (i < index - 1)
	{
		if (!instance || !(instance->next))
			return (-1);
		instance = instance->next;
		i++;
	}


	curr = instance->next;
	instance->next = curr->next;
	free(curr);

	return (1);
}

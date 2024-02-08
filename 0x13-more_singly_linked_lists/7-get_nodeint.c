#include "lists.h"
/**
* get_nodeint_at_index - that returns the nth node of a listint_t linked list.
* @index: The position to return
* @head: First node
* Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tmp = head;

	while (i < index && tmp)
	{
		tmp = tmp->next;
		i++;

	}
	if (tmp)
		return (tmp);
	return (NULL);
}


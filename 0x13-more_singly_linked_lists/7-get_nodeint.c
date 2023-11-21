#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: the first node
 * @index: the position of the node needed.
 * Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *instance = head;

	if (instance && n < index)
	{
		instance = instance->next;
		n++;

	}

	return (instance ? instance : NULL);
}

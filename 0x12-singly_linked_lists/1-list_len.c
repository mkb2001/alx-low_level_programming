#include "lists.h"

/**
 * list_len - a function to count the number of nodes
 * @h: the head of the linked list
 * Return: count of nodes
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;

	}
	return (count);
}


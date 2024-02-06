#include "lists.h"
/**
 * print_list - This prints the linked list
 * @h: the list
 * Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		printf("[0] (nil)");

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%n] %s", h->len, h->str);

		h = h->next;

		i++;

	}


	return (i);
}



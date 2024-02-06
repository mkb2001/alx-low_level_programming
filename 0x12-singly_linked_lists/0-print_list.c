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



	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		i++;

	}


	return (i);
}



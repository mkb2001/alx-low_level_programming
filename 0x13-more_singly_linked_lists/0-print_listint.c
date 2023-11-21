#include "lists.h"

/**
* print_listint  - function to find number
* @h: this is the first node
* Return: this returns a size
*/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

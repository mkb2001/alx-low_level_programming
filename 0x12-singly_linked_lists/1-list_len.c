#include "lists.h"
/**
* list_len - number of elements in a linked list_t list.
* @h: the list
* Return: returns the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{

int num = 0;

while (h)
{
	num++;

	h = h->next;
}

return (num);
}


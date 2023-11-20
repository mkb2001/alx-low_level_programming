#include "lists.h"

/**
* free_list - a function to free a list
* @head: the first node
* Returns: Nothing
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		temp = head;
	}
}

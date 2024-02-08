#include "lists.h"
/**
* sum_listint - The  returns the sum of all the data (n)
* of a listint_t linked list.
* @head: The first node
* Return: The sum
*/
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	int i = 0;

	listint_t *tmp = head;

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}

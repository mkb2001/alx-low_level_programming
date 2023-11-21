#include "lists.h"
/**
 * sum_listint - returns the sum of all.
 * @head: the first node
 * Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *just = head;


	while (just)
	{
		sum += just->n;
		just = just->next;
	}

	return (sum);
}

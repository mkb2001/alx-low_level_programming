#include "lists.h"
/**
 * print_listint_safe -function that prints
 *  a listint_t linked list.
 * @head: The first node.
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{

	const listint_t *temp = NULL;
	const listint_t *l = NULL;


	size_t new;
	size_t i = 0;

	temp = head;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		l = head;
		new = 0;
		while (new < i)
		{
			if (temp == l)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i);

			}
			l  = l->next;
			new++;
		}
		if (!head)
		{
			exit(98);
		}

	}
	return (i);

}

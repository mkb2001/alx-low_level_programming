#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node_iteratorode
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *instance = NULL;
	const listint_t *latest_node = NULL;
	size_t iterator = 0;
	size_t new_node_iterator;

	instance = head;
	while (instance)
	{
		printf("[%p] %d\n", (void *)instance, instance->n);
		iterator++;
		instance = instance->next;
		latest_node = head;
		new_node_iterator = 0;
		while (new_node_iterator < iterator)
		{
			if (instance == latest_node)
			{
				printf("-> [%p] %d\n", (void *)instance, instance->n);
				return (iterator);
			}
			latest_node = latest_node->next;
			new_node_iterator++;
		}
		if (!head)
			exit(98);
	}
	return (iterator);
}
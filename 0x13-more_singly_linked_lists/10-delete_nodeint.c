#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes the node at
* index index of a listint_t linked list.
* @head:the first node
* @index: The position of the node.
* Return: 1 if successfull else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *tmp = *head;
	listint_t *cur = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);

	}

	for (i = 0; i < index - 1; i++)
	{
		if (!tmp || !(tmp->next))
			return (-1);

		tmp = tmp->next;
	}

	cur = tmp->next;
	tmp->next = cur->next;
	free(cur);

	return (1);

}

#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add new node to end of linked list
 * @head: this is the head of the list
 * @str: this is the string
 * Return: the address of the new node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count = 0;
	list_t *temp = *head;

	while (str[count])
	{
		count++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}


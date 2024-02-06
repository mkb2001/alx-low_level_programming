#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @str: str needs to be duplicated
* @head: - pointer to head.
* Return: the address of the new element,
* or NULL if it failed
*
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *new;
	list_t *tmp;

	for (; str[i]; i++)
	{}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{

	*head = new;
	return (new);


	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - adds new node to head of  linked list
 * @head: this the head.
 * @str: this is the string in the node.
 * Return: the node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = count;
	new->str = strdup(str);
	new->next = head;
	(*head) = new;
	return (*head);
}

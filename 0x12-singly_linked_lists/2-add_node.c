#include "lists.h"
/**
 * *add_node - adds new node to head of  linked list
 * @head: this the head.
 * @str: this is the string in the node.
 * Return: the node
*/
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		printf("[%u] %s\n", new_node->len, new_node->str);
	}


	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

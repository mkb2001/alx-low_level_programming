#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
* struct list_s - A singly linked list structure
* @str: The string data
* @len: The length of the string
* @next: Pointer to the next node
*/
typedef struct list_s
{
	char *str;

	unsigned int len;

	struct list_s *next;

} list_t;

size_t print_list(const list_t *h);


#endif

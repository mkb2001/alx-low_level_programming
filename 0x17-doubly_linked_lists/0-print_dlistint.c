#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: This is the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h){
    int i = 0;
    while (h != NULL){
        printf("%d\n", h->n);
        i++;
        h = h->next;
    }

    return (i);
}

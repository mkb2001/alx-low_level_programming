#include "lists.h"

int sum_listint(listint_t *head)
{
    int i = 0;
    listint_t *tmp = head;

    while(tmp)
    {
        i += tmp->n;
        tmp = tmp->next;
    }
    return (i);
}
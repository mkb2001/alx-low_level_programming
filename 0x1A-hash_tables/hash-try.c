#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *first = NULL;
    int  hashedvalue = hash_function('h');

    insert(&first, size, hashedvalue, "HELLO");
    return first;
}

int hash_function(char buffer)
{
    return tolower(buffer - 'a');
}

void  insert(hash_table_t **head, int num, int key , const char* value)
{
    hash_node_t* newptr = malloc(sizeof(hash_node_t));
    if (newptr == NULL)
    {
        return;
    }
    strcpy(newptr->value, value);
    strcpy(newptr->key, "hello");
    newptr->next = NULL;
    if ((*head) == NULL)
    {
        (*head)->array[num] = newptr;
    }
    else
    {
        hash_node_t* temp = (*head)->array[num];
        while (1)
        {
            if (temp->next == NULL)
            {
                temp->next = newptr;
                break;
            }
            temp = temp->next;
        }
    }

}

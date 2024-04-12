#include "hash_tables.h"

int create_new_node(hash_node_t **head, char *data, char *data1)
{
    hash_node_t *node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);
    else
        printf("created");
    node->key = data;
    node->value = data1;
    node->next = NULL;
    if ((*head) == NULL)
    {
        (*head) = node;
    }else{

        hash_node_t *temp =  *head;

        while(1)
        {

            if (temp->next == NULL)
            {
                temp->next =node;

                break;
            }

            temp = temp->next;

        }
    }

    return (1);
}
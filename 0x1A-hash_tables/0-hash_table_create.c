#include "hash_tables.h"
/**
 * hash_table_create - This is a function to create a hash table
 * @size: The size of the array
 * Return:  The pointer of the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *first = malloc(sizeof(hash_table_t));
    if (first == NULL)
        return (NULL);

    first->size = size;
    first->array = malloc(sizeof(hash_node_t *) * size);;
    if (first->array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
    {
        first->array[i] = NULL;
    }
    return (first);
}

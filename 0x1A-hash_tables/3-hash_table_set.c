#include "hash_tables.h"


/**
* hash_table_set - A function to add a new value to the hashtable
* @key: The Key
* @value: The value
* @ht: The pointer to the hash table
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *newptr;
	unsigned long int index;

	newptr = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL)
		return (0);


	if (newptr == NULL)
		return (0);

	newptr->value = strdup(value);
	newptr->key = strdup(key);
    if (newptr->key == NULL) {
        free(newptr);
        return 0;
    }

    newptr->next = NULL;

	if (ht->array == NULL) {
		ht->array = malloc(sizeof(hash_node_t *));
		if (ht->array == NULL) {
			free(newptr->value);
			free(newptr->key);
			free(newptr);
			return (0);
		}
		ht->array[0] = NULL;
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newptr;
	} else
	{
		hash_node_t *temp = ht->array[index];
		while (temp->next != NULL)
        {
			temp = temp->next;
		}
		temp->next = newptr;
	}

	return (1);
}

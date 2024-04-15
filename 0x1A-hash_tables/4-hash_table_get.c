#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the pointer to the hash table
 * @key: the key
 * Return: The value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;

	hash_node_t *element;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (key == NULL)
		return (NULL);

	if (index >= ht->size)
		return (NULL);

	element = ht->array[index];
	while (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			value = element->value;
			break;
		}
		element = element->next;
	}
	return (value);
}

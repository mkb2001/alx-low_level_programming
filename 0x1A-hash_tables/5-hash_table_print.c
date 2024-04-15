#include "hash_tables.h"
/**
* hash_table_print - Prints the entire hash table
* @ht: this is the pointer to the hash table
*
*/
void hash_table_print(const hash_table_t *ht)
{
	int first;

	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	first = 1;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");

}

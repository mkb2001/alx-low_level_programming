#ifndef ALX_LOW_LEVEL_PROGRAMMING_HASH_TABLES_H
#define ALX_LOW_LEVEL_PROGRAMMING_HASH_TABLES_H
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

int create_new_node(hash_node_t **head, char *data, char *data1);
int hash_function(char buffer);
hash_table_t *hash_table_create(unsigned long int size);
void  insert(hash_table_t **head, int num, int key , const char* value);
#endif //ALX_LOW_LEVEL_PROGRAMMING_HASH_TABLES_H

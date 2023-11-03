#include "hash_tables.h"
/**
 * hash_table_create - create
 * @size: size of array
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	hash_table_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
		return (NULL);
	new->size = size;
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}

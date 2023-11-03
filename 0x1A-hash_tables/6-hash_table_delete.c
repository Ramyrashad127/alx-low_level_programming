#include "hash_tables.h"
/**
 * hash_table_delete - del
 * @ht: ht
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *test;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			test = ht->array[i];
			ht->aaray[i] = ht->array[i]->next;
			free(test->key);
			free(test->value);
			free(test);
			test = ht->array[i];
		}
	}
	free(ht->array);
}

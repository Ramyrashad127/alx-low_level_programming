#include "hash_tables.h"
/**
 * hash_table_print - print
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *test;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		test = ht->array[i];
		while (test)
		{
			printf("'%s' : '%s'",test->key, test->value);
			if ((i != ht->size - 1) && (test->next != NULL))
				printf(", ");
			test = test->next;
		}
	}
	printf("}\n");
}

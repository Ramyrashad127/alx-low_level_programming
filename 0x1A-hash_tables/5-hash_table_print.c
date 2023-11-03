#include "hash_tables.h"
/**
 * hash_table_print - print
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c = 0;
	hash_node_t *test;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			test = ht->array[i];
			while (test)
			{
				if (c > 0)
					printf(", ");
				c++;
				printf("'%s' : '%s'", test->key, test->value);
				test = test->next;
			}
		}
	}
	printf("}\n");
}

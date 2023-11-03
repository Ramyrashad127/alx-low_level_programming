#include"hash_tables.h"
/**
 * hash_table_get- get
 * @ht: ht
 * @key: key
 * Return: st
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *test;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	test = ht->array[index];
	while(test)
	{
		if (strcmp(test->key, key) == 0)
		{
			return (test->value);
		}
		test = test->next;
	}
	return (NULL);
}

#include"hash_tables.h"
/**
 * hash_table_set - hash
 * @ht: table
 * @key: key
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *test, *new;
	unsigned long int index;

	if (!key || !ht || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	test = ht->array[index];
	if (test == NULL)
	{
		return (add_first(ht, key, value, index));
	}
	while (test)
	{
		if (strcmp(test->key, key) == 0)
		{
			if (strcmp(test->value, value) == 0)
				return (1);
			free(test->value);
			test->value = malloc(sizeof(char) * strlen(value) + 1);
			if (!test->value)
				return (0);
			strcpy(test->value, value);
			return (1);
		}
		test = test->next;
	}
	new = malloc(sizeof(hash_node_t));
	new->next = NULL;
	new->key = malloc(sizeof(char) * strlen(key) + 1);
	if (!new->key)
		return (0);
	strcpy(new->key, key);
	new->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!new->value)
		return (0);
	strcpy(new->value, value);
	test = new;
	return (1);
}
/**
 * add_first - add
 * @ht: array[index]
 * @key: key
 * @value: value
 * @index:: innd
 * Return: 1 or 0
 */
int add_first(hash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	hash_node_t *test = malloc(sizeof(hash_node_t));

	if (!test)
		return (0);
	test->key = malloc(sizeof(char) * strlen(key) + 1);
	if (!test->key)
		return (0);
	test->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!test->value)
		return (0);
	strcpy(test->key, key);
	strcpy(test->value, value);
	test->next = NULL;
	ht->array[index] = test;
	return (1);
}

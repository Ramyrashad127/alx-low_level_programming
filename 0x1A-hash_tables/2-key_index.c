#include"hash_tables.h"
/**
 * key_index - get index
 * @size: size
 * @key: key
 * Return index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key)
	{
		hash = hash_djb2(key);
		return (hash % size);
	}
}

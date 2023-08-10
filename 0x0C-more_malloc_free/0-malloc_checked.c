#include "main.h"
/**
 * malloc_checked - check
 * @b:test
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

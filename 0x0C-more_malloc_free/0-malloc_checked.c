#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - check
 * @b:test
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

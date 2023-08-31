#include "main.h"
/**
 * clear_bit - s
 * @n: n
 * @index: index
 * Return: 1   -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (sizeof(*n) * 8 - 1 < index)
		return (-1);
	c = 1 << index;
	c = ~c;
	*n = c & *n;
	return (1);
}

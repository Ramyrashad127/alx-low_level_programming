#include "main.h"
/**
 * set_bit - s
 * @n: n
 * @index: index
 * Return: 1   -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(*n) * 8 - 1 < index)
		return (-1);
	return (1 << index | *n);
}

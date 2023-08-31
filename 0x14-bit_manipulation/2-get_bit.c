#include"main.h"
/**
 * get_bit - get
 * @n: num
 * @index: ind
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	return (n >> index);
}

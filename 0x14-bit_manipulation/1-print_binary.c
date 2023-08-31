#include"main.h"
/**
 * print_binary - p
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0;

	while (n > 0)
	{
		_putchar((n | 1) + 48);
		n = n >> 1;
	}
}

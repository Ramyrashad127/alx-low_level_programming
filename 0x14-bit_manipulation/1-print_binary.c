#include"main.h"
/**
 * print_binary - p
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int cnt = sizeof(n) * 8 - 1;
	unsigned long int c, b = 1, x = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; cnt > 0; cnt--)
	{
		if (!x)
		{
			c = n;
			c = c >> cnt;
			x = (c & b);
		}
		if (x)
		{
		c = n;
		c = c >> cnt;
		_putchar((c & b) + '0');
		}
	}
	_putchar((n & b) + '0');
}

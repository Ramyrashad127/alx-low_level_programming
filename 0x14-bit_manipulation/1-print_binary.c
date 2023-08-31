#include"main.h"
/**
 * print_binary - p
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int cnt = sizeof(n) * 8 -1;
	long int = 1 << cnt;

	if (n == 0)
	{
		_putchar(0 +'0');
		return;
	}
	while (cnt != 0)
	{
		_putchar((cnt & n) + '0');
		cnt = cnt >> 1
	}
}

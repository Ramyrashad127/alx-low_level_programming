#include"main.h"
/**
 * print_last_digit - print
 * @n:test
 * Return:0
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}

#include "main.h"
/**
 * print_rev - print
 * @s: string
 * Return: null
 */
void print_rev(char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

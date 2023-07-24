#include "main.h"
/**
 * print_rev - print
 * @s: string
 * Return: null
 */
void print_rev(char *s)
{
	int count, i;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

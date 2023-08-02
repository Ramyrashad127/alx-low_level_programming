#include "main.h"
/**
 *
 * _print_rev_recursion - print
 * @s:string
 * Return: pointer
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_print_rev_recursion(s++);
	_putchar(s[0]);
}

#include "main.h"
/**
 * puts_half - print
 * @str: string
 * Return: null
 */
void puts_half(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	count /= 2;
	for (i = count; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

#include "main.h"
/**
 * main - print
 * @argc: size
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *s = argv[0];

	for (i = 0; s[i] != '\0'; i++ )
		_putchar(s[i]);
	_putchar('\n');
	(void) argc;
	return (0);
}

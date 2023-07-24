#include "main.h"
/**
 * _strlen - len
 * @s: array
 * Return: int
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

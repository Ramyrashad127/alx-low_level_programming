#include "main.h"
/**
 * _strcat - cat
 * @dest: test
 * @src: test
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i + c] = src[c];
	}
	dest[i + c] = '\0';
	return (dest);
}

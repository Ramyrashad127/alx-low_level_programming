#include"main.h"
/**
 *
 * _strncat - cat
 * @dest: test
 * @src: test
 * @n: test
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; c < n; c++)
		dest[c + i] = src[c];
	dest[i + c] = '\0';
	return (dest);
}
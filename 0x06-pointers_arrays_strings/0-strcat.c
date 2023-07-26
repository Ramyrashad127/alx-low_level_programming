#include "main.h"
/**
 * _strcat - cat
 * @dest:test
 * @src:test
 * Return:pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++ )
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i + c] = src[c];
	}
	return (dest);
}

#include "main.h"
/**
 * rev_string - reverse
 * @s: string
 * Return: null
 */
void rev_string(char *s)
{
	char *s2, count = 0, i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		s2[i] = s[i];
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		s[c] = s2[i];
		c++;
	}
}

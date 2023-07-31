#include"main.h"
/**
 * _strchr - char
 * @s:test
 * @c:test
 * Return:pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *b;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			b = &c;
			return (b);
		}
	}
	return (NULL);
}

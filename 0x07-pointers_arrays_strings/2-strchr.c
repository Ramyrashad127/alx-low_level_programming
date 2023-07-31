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
	char *b = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (b);
		}
		else
			b++;
	}
	return (NULL);
}

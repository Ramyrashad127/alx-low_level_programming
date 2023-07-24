#include "main.h"
/**
 * rev_string - reverse
 * @s: string
 * Return: null
 */
void rev_string(char *s)
{
	 char ch, *p, *q;

	for (q = s; *q != '\0'; ++q)
		;
	if (q > s)
		--q;
	for (p = s; p < q; ++p, --q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
	}
}

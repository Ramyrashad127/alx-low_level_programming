#include "main.h"
/**
 * reverse_array - reverse
 * @a:array
 * @n:elements
 * Return:null
 */
void reverse_array(int *a, int n)
{
	int *b = a;
	int c, i;
	for (i = 0; i < n - 1; i++)
		b++;
	for (i = 0; a < b; i++)
	{
		c = *a;
		*a = *b;
		*b = c;
		a++;
		b--;
	}
}

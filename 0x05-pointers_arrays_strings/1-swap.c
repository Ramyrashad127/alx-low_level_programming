#include"main.h"
/**
 * swap_int - swap
 * @a:test
 * @b:test
 * RETURN: null
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

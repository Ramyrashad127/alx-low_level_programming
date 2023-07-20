#include"main.h"
/**
 * _isupper - check
 * @c:test
 * Return:1 if uppercase 0if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

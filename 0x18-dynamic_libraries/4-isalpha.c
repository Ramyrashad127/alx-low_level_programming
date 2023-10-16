#include"main.h"
/**
 * _isalpha - cheack
 * @c:test
 * Return: int
 */
int _isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

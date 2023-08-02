#include "main.h"
/**
 * factorial - fact
 * @n:test
 * Return: int
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}

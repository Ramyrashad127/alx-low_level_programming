#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * 
 * Return: always 0
 */
int main(void)
{
	long unsigned int x = 612852475143, y = 0, i;

	for (i = 2; i <= 782849; i++)
	{
		while (x % i == 0)
		{
			y = i;
			x /= i;
		}
	}
	if (x == 1)
		printf("%lu\n", y);
	else
		printf("%lu\n", x);
	return (0);
}

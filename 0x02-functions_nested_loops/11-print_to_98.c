#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - print
 * @n;test
 * Return: 0
 */
void print_to_98(int n)
{
	while (n <= 97)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
		printf("%d", 98);
}

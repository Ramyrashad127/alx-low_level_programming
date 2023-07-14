#include<stdio.h>

/**
* main - print digits
*
* Return: Always (success)
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}

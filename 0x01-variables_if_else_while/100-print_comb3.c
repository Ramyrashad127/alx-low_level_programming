#include<stdio.h>

/**
* main - print digits
*
* Return: Always (success)
*/
int main(void)
{
	int a, b;

	for (a = 1, b = 0; b <= 9; a++)
	{
		if (a == b || a == 0)
			continue;
		putchar(b + 48);
		putchar(a + 48);
		if (a == 9 && b == 8)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (a == 9)
		{
			a = b;
			b++;
		}
	}
	putchar('\n');
	return (0);
}

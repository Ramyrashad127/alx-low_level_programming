#include<stdio.h>

/**
* main - print digits
*
* Return: Always (success)
*/
int main(void)
{
	int a,b;

	for (a = 0,b=0; b <= 9; a++)
	{
		putchar(a + 48);
		putchar(b + 48);
		if (a == 9 && b == 9)
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
			b++;
			a = 0;
		}
	}
	putchar('\n');
	return (0);
}

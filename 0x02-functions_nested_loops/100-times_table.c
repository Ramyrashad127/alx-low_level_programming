#include"main.h"
/**
* print_times_table - print
* @n:test
* Return: null
*/
void print_times_table(int n)
{
	int x, y, z, re1, re2;

	if (n > 15 || n < 0)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z < 10)
			{
				_putchar(z+48);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (z >= 10 && z < 100)
			{
				re = z % 10;
				z /= 10;
				_putchar(z + 48);
				_putchar(re1 + 48);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				re1 = z % 10;
				z /= 10;
				re2 = z % 10;
				z /= 10;
				_putchar(z + 48);
				_putchar(re2 + 48);
				_putchar(re1 + 48);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}

			}
		}
		_putchar('\n');
	}

}

#include"main.h"
/**
 * times_table - test
 *
 * Return:0
 */
void times_table(void)
{
	int x, y,re,s;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			re = x * y;
			if (re >= 10)
			{
				s = re % 10;
				re /= 10;
				_putchar(re + 48);
				_putchar(s + 48);
			}
			else
				_putchar(re + 48);
			_putchar(' ');
		}
		_putchar('\n');
	}

}

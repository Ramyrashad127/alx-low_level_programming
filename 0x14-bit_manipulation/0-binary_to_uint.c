#include"main.h"
#include<math.h>
/**
 * int binary_to_uint - convert
 * @b: string
 * Return: d
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, res = 1;
	int i, j = 0, c = 0, p;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		j++;
	i = j - 1;
	while (j--)
	{
		if (b[i] == '1')
		{
			for (p = 1; p <= c; p++)
				res *= 2;
			sum += res;
			res = 1;
		}
		else if (b[i] != '0')
			return (0);
		c++;
		i--;
	}
	return (sum);
}

#include"main.h"
#include<math.h>
/**
 * int binary_to_uint - convert
 * @b: string
 * Return: d
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0,i,c = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	for (i; i >= 0; i--)
	{
		if (s[i] == '1')
			sum += pow(2, c);
		c++;
	}
	return (sum);
}



#include"main.h"
/**
 * flip_bits - flip
 * @n: 1
 * @m: 2
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;

	while ( n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			cnt++;
		n = n >> 1;
		m = m >> 1;
	}
	return (cnt);
}

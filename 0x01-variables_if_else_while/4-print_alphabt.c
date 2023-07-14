#include <stdio.h>

/**
 * main - print alpghbet
 *
 * Return: Always (access)
 */
int main(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		if(i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}

	putchar('\n');
	return 0;
}	

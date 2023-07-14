#include<stdio.h>

/**
* main - print alpghabet
*
*Return: Always (success)
*/
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}

	putchar('\n');
	return 0;
	
}

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
		putchar(i);
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return 0;
	
}

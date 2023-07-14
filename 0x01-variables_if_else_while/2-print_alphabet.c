#include<stdio.h>

/**
* main - print alpghabet
*
*Return: Always (success)
*/
int main(void)
{
	char a = 'a';
	for (int i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return 0;
	
}

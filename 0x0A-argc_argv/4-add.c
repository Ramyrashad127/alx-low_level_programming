#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - p
 * @argc:test
 * @argv:test
 * Return:0
 */
int main(int argc, char *argv[])
{
	long unsigned int sum = 0, j = 0;
	int x = 0, i = 0;
	char *arr;

	for (i = 1; i < argc; i++)
	{
		arr = argv[i];
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (arr[j] < '0' || arr[j] > '9')
				x = 1;
		}
		if (!x)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", sum);
	return (0);
}




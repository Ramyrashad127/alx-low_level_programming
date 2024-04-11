#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - two pointer
 * @array: pointer
 * @size: length
 * @value: find
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int st = 0, en = size - 1, m, j;

	if (array == NULL)
		return (-1);
	while (st <= en)
	{
		printf("Searching in array: ");
		for (j = st; j <= en; j++)
		{
			printf("%d", array[j]);
			if (j != en)
				printf(", ");
		}
			printf("\n");
		m = (st + en) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			st = m + 1;
		else
			en = m - 1;
	}
	return (-1);
}

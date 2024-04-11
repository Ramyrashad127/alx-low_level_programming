#include "search_algos.h"
#include <stdio.h>
/*
 * linear_search - search O(n)
 * @array: array
 * @size: length
 * @value: find it
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	for(i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%d] = [%d]\n",i, array[i]);
	}
	return (-1);
}

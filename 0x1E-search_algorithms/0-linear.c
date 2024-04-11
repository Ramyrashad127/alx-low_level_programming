#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/*
 * linear_search - search O(n)
 * @array: array
 * @size: length
 * @value: find it
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for(i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%ld] = [%d]\n",i, array[i]);
	}
	return (-1);
}

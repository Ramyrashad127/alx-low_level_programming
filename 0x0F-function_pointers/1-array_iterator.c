#include"function_pointers.h"
/**
 * array_iterator - test
 * @array: test
 * @size: size
 * @action: test
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}

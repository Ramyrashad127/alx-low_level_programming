#include "main.h"
/**
 * create_array - print
 * @size: size
 * @c:char
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

#include "lists.h"
/**
 * print_list - test
 * @h: test
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t* curr = h;

	while (curr->next != NULL)
	{
		if (curr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n",curr->len )
				curr = curr->next;
		}
		i++;
	}
	return (i);
}

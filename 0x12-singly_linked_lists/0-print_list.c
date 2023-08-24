#include "lists.h"
#include <stdio.h>
/**
 * print_list - test
 * @h: test
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
				h = h->next;
		}
		i++;
	}
	return (i);
}

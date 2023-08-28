#include"lists.h"
#include <stdio.h>
/**
 * print_listint - print
 * @h:head
 * Return:num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num = num + 1;
		h = h->next;
	}
	return (num);
}

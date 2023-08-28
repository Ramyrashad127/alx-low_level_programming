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
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		num = num + 1;
		ptr = ptr->next;
	}
	return (num);
}

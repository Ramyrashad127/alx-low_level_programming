#include"lists.h"
/**
 * print_listint - print
 * @h: heade
 * Return: unsigned
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

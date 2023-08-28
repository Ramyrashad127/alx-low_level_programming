#include"lists.h"
/**
 * print_listint - print
 * @h: heade
 * Return: unsigned
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	listint_t *ptr = h;

	if (!h)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		num++;
		ptr = ptr->next;
	}
	return (num);
}

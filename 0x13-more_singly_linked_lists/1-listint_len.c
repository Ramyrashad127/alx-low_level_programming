#include"lists.h"
/**
 * listint_len - print
 * @h: heade
 * Return: unsigned
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

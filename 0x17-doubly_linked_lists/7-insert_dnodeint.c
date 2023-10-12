#include "lists.h"
/**
 * insert_dnodeint_at_index - insert
 * @h: head
 * @idx: index
 * @n: n
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *test = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (test)
	{
		if (i + 1 == idx)
			break;
		test = test->next;
		i++;
	}
	if (i + 1 != idx)
	{
		free(new);
		return (NULL);
	}
	if (test->next == NULL)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	new->next = test->next;
	new->prev = test;
	test->next = new;
	return (new);
}

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

	if (!test && idx ==0)
	{
		return (add_dnodeint(h, n));
	}
	if (!test)
		return (NULL);
	while (test)
	{
		i++;
		test = test->next;
	}
	if (idx > i)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == i)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	i = 0;
	test = *h;
	while (test)
	{
		if (i + 1 == idx)
			break;
		i++;
		test = test->next;
	}
	new->n = n;
	new->next = test->next;
	new->prev = test;
	test->next = new;
	return (new);
}

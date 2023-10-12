#include "lists.h"
/**
 * add_dnodeint_end - add
 * @head: head
 * @n: n
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *test = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	while (test->next)
	{
		test = test->next;
	}
	test->next = new;
	new->prev = test;
	return (new);
}

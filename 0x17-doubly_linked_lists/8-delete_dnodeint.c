#include "lists.h"
/**
 * delete_dnodeint_at_index - d
 * @head: head
 * @index: index
 * Return: node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *test, *t, *p;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	test = *head;
	while (test)
	{
		if (i == index)
			break;
		test = test->next;
		i++;
	}
	if (i != index)
		return (-1);
	if (i == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(test);
	}
	else
	{
		t = test->prev;
		p = test->next;
		t->next = p;
		if (p)
			p->prev = t;
		free(test);
	}
	return (1);
}

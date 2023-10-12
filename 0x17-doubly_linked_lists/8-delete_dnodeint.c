#include "lists.h"
/**
 * delete_dnodeint_at_index - d
 * @head: head
 * @idx: index
 * Return: node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *test = *head, *t;
	unsigned int i =0;

	while(test)
	{
		if (i == idx)
			break;
		test = test->next;
		i++;
	}
	if (i != idx)
		return (-1);
	if (i == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(test);
	}
	else
	{
		t = test->prev;
		t->next = test->next;
		free(test);
	}
	return (1);
}

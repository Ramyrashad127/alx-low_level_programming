#include "lists.h"
/**
 * get_dnodeint_at_index - get
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}

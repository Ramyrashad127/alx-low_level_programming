#include "lists.h"
/**
 * insert_nodeint_at_index - i
 * @head: head
 * @idx: i
 * @n: n
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *node, *ptr;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	node = (*head);
	ptr = node;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	if (i < idx)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	else if (idx == i)
	{
		new = add_nodeint_end(head, n);
		return (new);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
			node = node->next;
		new->n = n;
		new->next = node->next;
		node->next = new;
		return (new);
	}
}

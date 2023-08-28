#include "lists.h"
/**
 * delete_nodeint_at_index - delete
 * @head: h
 * @index: i
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *next;
	unsigned int i = 0;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i <= index || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		ptr = ptr->next;
	}
	next = ptr->next;
	ptr->next = next->next;
	free(next);
	return (1);
}


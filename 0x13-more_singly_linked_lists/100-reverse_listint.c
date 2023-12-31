#include "lists.h"
/**
 * reverse_listint - rev
 * @head: h
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	curr = (*head)->next;
	while (curr != NULL)
	{
		(*head)->next = prev;
		prev = *head;
		*head = curr;
		curr = curr->next;
	}
	(*head)->next = prev;
	return (*head);
}

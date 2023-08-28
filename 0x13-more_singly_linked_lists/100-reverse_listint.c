#include "lists.h"
/**
 * reverse_listint - rev
 * @head: h
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev;

	if (head == NULL)
		return (NULL);
	prev = NULL;
	curr = (*head)->next;
	if (!curr)
		return (prev);
	while (*head != NULL)
	{
		(*head)->next = prev;
		prev = *head;
		*head = curr;
		curr = curr->next;
	}
	return (prev);

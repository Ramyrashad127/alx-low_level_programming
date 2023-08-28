#include"lists.h"
/**
 * pop_listint - remove
 * @head: first ele
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (ptr == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (n);
}

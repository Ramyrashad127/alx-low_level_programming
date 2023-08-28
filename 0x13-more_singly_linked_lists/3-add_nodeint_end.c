#include"lists.h"
/**
 * add_nodeint_end - add
 * @head: first
 * @n: ele
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (!ptr)
		return (NULL);
	ptr->n = n;
	if (curr == NULL)
	{
		*head = ptr;
		(*head)->next = NULL;
		return (*head);
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = ptr;
	ptr->next = NULL;
	return (ptr);
}

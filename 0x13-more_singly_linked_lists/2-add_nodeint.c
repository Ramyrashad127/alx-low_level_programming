#include"lists.h"
/**
 * add_nodeint - add
 * @head: first
 * @n: elem
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		(*head)->next = NULL;
		return (*head);
	}
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

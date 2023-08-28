#include"lists.h"
/**
 * free_listint2 - free
 * @head: first ele
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *curr = *head;

	while (curr != NULL)
	{
		ptr = curr;
		curr = curr->next;
		free(ptr);
	}
}

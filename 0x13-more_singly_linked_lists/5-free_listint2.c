#include"lists.h"
/**
 * free_listint2 - free
 * @head:first
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *node = *head;

	if (!ptr)
		return;
	while (node != NULL)
	{
		ptr = node;
		node = node->next;
		free(ptr);
	}
	*head = NULL;
}

#include"lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free
 * @head:first
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}

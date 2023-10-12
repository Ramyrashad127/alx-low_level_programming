#include "lists.h"
/**
 * free_dlistint - free
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *test = head->next;

	while (test)
	{
		free(head);
		head = test;
		test = test->next;
	}
	free(head);
}

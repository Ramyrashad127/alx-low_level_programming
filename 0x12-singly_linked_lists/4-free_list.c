#include<stdlib.h>
#include "lists.h"
/**
 * free_list - free
 * @head: head
 * Return:
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}

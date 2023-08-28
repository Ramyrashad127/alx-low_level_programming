#include"lists.h"
/**
 * free_listint - free
 * @head: first ele
 * Return: null
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->next);
		free(ptr);
	}
}

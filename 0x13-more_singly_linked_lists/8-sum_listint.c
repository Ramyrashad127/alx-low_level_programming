#include"lists.h"
/**
 * sum_listint - sum
 * @head: first
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

#include"lists.h"
/**
 * get_nodeint_at_index - get
 * @head: first ele
 * @index: i
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (curr != NULL && i != index)
	{
		curr = curr->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (curr);
}

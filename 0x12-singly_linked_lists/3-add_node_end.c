#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_node_end - add
 * @head: test
 * @str: test
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0, i = 0;
	list_t *ptr = malloc(sizeof(list_t));
	list_t *curr = *head;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (!ptr)
		return (NULL);
	ptr->len = len;
	ptr->str = strdup(str);
	if (curr == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = ptr;
	ptr->next = NULL;
	return (ptr);
}

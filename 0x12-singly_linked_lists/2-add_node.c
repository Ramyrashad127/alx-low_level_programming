#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_node - add
 * @head: test
 * @str: test
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len, i = 0;
	list_t *ptr = malloc(sizeof(list_t));

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (!ptr)
		return (NULL);
	ptr->len = len;
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

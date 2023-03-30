#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add node to the head of linked list
 * @head: head of the linked list
 * @str: string to be added in the node
 * Return: new head or null otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->str = malloc((strlen(str) + 1) * sizeof(char));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	strcpy(new_node->str, str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

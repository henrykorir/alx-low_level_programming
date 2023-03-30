#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a not at the end of linked list
 * @head: pointer tot he head node
 * @str: string to be added on to the node
 * Return: new node pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *temp = *head;

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
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

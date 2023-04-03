#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - calculates the total sum of
 * data in the list
 * @head: the starting node in the list
 * Return: total sum of data in the list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

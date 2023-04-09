#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the first node
 * Return:  The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	int direction;

	if (head == NULL || head->next == NULL)
		return (NULL);
	if ((head == head->next) || (head->next - head == 0))
		return (head->next);
	direction = (head->next - head) < 0 ? -1 : 1;
	while (head != NULL && head->next != NULL)
	{
		if (!(((head->next - head) > 0 && (direction > 0)) ||
		((head->next - head) < 0 && (direction < 0))))
			return (head->next);
		head = head->next;
	}

	return (NULL);
}

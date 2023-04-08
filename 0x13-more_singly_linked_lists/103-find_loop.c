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
	size_t n = 0;
	int direction;

	if (head == NULL || head->next == NULL)
		return (NULL);
	if (head == head->next)
		return (head->next);
	direction = (head->next - head) < 0 ? -1 : 1;
	while (head != NULL)
	{
		if (n > 0 && head->next != NULL)
		{
			if (!(((head->next - head) > 0 && direction > 0) ||
			((head->next - head) < 0 && direction < 0)))
			{
				n++;
				return(head->next);
			}
		}
		head = head->next;
		n++;
	}

	return (NULL);
}

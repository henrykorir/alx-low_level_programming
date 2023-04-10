#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: the number
 * @index: the index at which a bit is to be set to 1
 * Return: 1 if success, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n =  ((*n) | (1 << index));
	return (1);
}

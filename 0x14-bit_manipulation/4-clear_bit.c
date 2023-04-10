#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 *
 * @n: address of a number
 * @index: index at which a bit has to be set to 0
 * Return: 1 if success, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
		return (-1);
	*n = (*n) & (~(1 << index));
	return (1);
}

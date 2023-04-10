#include "main.h"
/**
 * get_bit - retrieves a bit at a given index
 *
 * @n: the number
 * @index: index of the bit to be retrieved
 * Return: the value of bit a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return ((n & (1 << index)) >> index);
}

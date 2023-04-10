#include "main.h"
/**
 * flip_bits - counts the number of bits to be flipped
 * in changing a number from one to another
 *
 * @n: The second number
 * @m: first number
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while (m || n)
	{
		if ((m & 1) != (n & 1))
			count++;
		m >>= 1;
		n >>= 1;
	}

	return (count);
}

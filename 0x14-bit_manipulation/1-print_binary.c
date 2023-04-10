#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: positive number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%lu", n & 1);
}

#include "main.h"
/**
 * get_endianness - gets the endianness of
 * machine architecture
 * Return: 0 if big-endian or
 * 1 litte-endian
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *)&x;

	return (*c == 0x10);
}

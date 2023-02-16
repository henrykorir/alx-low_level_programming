#include <stdio.h>
/*
 * main - Entry point
 *
 * Retun: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", (int)sizeof(char));
	printf("Size of an int: %d bytes(s)\n", (int)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Sizeof a float: %d byte(s)\n", (int)sizeof(float));

	return (0);
}

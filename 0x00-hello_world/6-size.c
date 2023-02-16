#include <stdio.h>
/*
 * finding out the 
 * size of data types
 */
int main(void)
{
	printf("size of a char: %d bytes(s)\n", (int)sizeof(char));
	printf("size of an int: %d bytes(s)\n", (int)sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int)sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("sizeof a float: %d byte(s)\n", (int)sizeof(float));

	return (0);
}

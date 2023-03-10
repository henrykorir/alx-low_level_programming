#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of commands
 * @argv: commands
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0, change, cents[5] = {25, 10, 5, 2, 1}, count = 0;

	if (argc == 1)
	{
		puts("Error");
		return (1);
	}
	change = (int)atoi(argv[1]);
	if (change < 0)
	{
		puts("0");
		return (0);
	}
	for (; i < 5; i++)
	{
		count += change / cents[i];
		change = change % cents[i];
	}
	printf("%d\n", count);

	return (0);
}

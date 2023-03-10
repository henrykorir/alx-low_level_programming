#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of command lines
 * @argv: commands
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

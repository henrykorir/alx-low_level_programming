#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: commands
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

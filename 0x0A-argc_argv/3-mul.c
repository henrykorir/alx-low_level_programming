#include <stdio.h>
/**
 * asciiToInt - convert number ascii to integer
 * @s: string of ascii characters
 * Return: integer value
 */
int asciiToInt(char *s)
{
	int n = 0, i = 0, sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		n = n * 10 + (s[i] -  '0');
		i++;
	}
	n *= sign;

	return (n);
}
/**
 * main - Entry point
 * @argc: number of commands
 * @argv: commands
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		puts("Error");

		return (1);
	}
	a = asciiToInt(argv[1]);
	b = asciiToInt(argv[2]);
	printf("%d\n", a * b);

	return (0);
}

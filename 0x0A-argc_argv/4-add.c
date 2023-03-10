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
	int sum = 0, i = 0, j = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
			j++;
		}
		j = 0;
		sum += asciiToInt(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

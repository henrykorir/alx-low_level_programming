#include <stdio.h>
#include <stdlib.h>

/**
* check_commands - ensure the commands are legal
* @argc: the number of command lines
* @argv: array of commands
* Return: 1 if commands are okay or -1 otherwise
*/
int check_commands(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc != 3)
		return (-1);
	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '-')
			j++;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (-1);
			j++;
		}
		j = 0;
	}

	return (1);
}

/**
* get_length - calculates the length of a string
* @s: string
* Return: length of a string
*/
int get_length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
* allocate_memory - reserves memory for doing multiplication
* @length: the width of the memory required
* @height: the height of the memory required
* Return: pointer to the reserved memory or NULL otherwise
*/
char **allocate_memory(int length, int height)
{
	int i = 0, j = 0;
	char **memory = malloc(height * sizeof(char *));

	if (memory == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		memory[i] = calloc(length, sizeof(char));
		if (memory[i] == NULL)
		{
			for (j = i; j >= 0; j++)
				free(memory[j]);
			free(memory);
			return (NULL);
		}
	}

	return (memory);
}

/**
* multiply_digits - finds the product of 2 digits
* @a: multiplicand
* @b: multiplier
* @c: pointer to carry value
* Return: product
*/
char multiply_digits(char a, char b, char *c)
{
	int result = 0;

	result = ((a - '0') * (b - '0')) + (*c - '0');
	*c = (result / 10) + '0';

	return ((result % 10) + '0');
}

/**
* sum_products - find the sum of products
* @memory: pointer to allocated memory
* @length: length of the memory
* @height: height of the memory
* @sign: the sign of the whole sum
*/
void sum_products(char ***memory, int length, int height, char sign)
{
	int i = length - 1, j = 0, result = 0, carry = 0;

	for (; i >= 0; i--)
	{
		result = 0;
		for (j = 0; j < height - 1; j++)
		{
			if ((*memory)[j][i] != '\0')
				result += ((*memory)[j][i] - '0');
		}
		result += carry;
		carry = result / 10;
		(*memory)[height - 1][i] = (result % 10) + '0';
	}
	(*memory)[height - 1][0] = sign;
}

/**
* do_product - calculate individual products
* @argv: array of numbers to be multiplied
* @memory: where to store the products
* @length1: the size of the first number
* @length2: the size of the second number
* Return: pointer to where the products are
*/
char **do_product(char *argv[], char ***memory, int length1, int length2)
{
	int i = length2 - 1, j = length1 - 1, k = 0, m = 0, x = 2, y = 1;
	int n = (length1 + length2), p = 0, temp;
	int height = (length1 < length2 ? length1 : length2) + 1;
	char c = '0', sign = '0';

	if ((argv[1][0] == '-' && argv[2][0] != '-') ||
		(argv[1][0] != '-' && argv[2][0] == '-'))
		sign = '-';
	if (length1 < length2)
	{
		temp = length1;
		length1 = length2;
		length2 = temp;
		temp = x;
		x = y;
		y = temp;
	}
	for (i = length2 - 1; (argv[x][0] == '-' ? i > 0 : i >= 0); i--)
	{
		k = n - p;
		for (j = length1 - 1; (argv[y][0] == '-' ? j > 0 : j >= 0); j--)
		{
			(*memory)[m][k] = multiply_digits(argv[x][i], argv[y][j], &c);
			k--;
		}
		(*memory)[m][k] = c;
		c = '0';
		m++;
		p++;
	}
	sum_products(memory, n + 1, height, sign);

	return (*memory);
}

/**
* print_answer - display the result of multiplication
* @memory: 2d array of the products
* @length: the width of the array
* @height: height of the array
*/
void print_answer(char **memory, int length, int height)
{
	int i = 0;

	if (memory[height - 1][0] == '-')
		putchar('-');
	i++;
	while (memory[height - 1][i] == '0')
		i++;
	for (; i < length; i++)
		printf("%c", memory[height - 1][i]);
	puts("");
}

/**
* deallocate_memory - free reserved memory
* @height: height of the array
*/
void deallocate_memory(char **memory, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(memory[i]);
	free(memory);
}

/**
* main - Entry point
* @argc: number of command lines
* @argv: array of commands
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int result = -1;
	int string1_length = 0, string2_length = 0, length = 0, height = 0;
	char **memory = NULL;

	result = check_commands(argc, argv);
	if (result < 0)
	{
		puts("Error");
		exit(98);
	}
	string1_length = get_length(argv[1]);
	string2_length = get_length(argv[2]);
	length = string1_length + string2_length + 1;
	height = string1_length < string2_length ? string1_length : string2_length;
	height++;
	memory = allocate_memory(length, height);
	if (memory == NULL)
	{
		puts("Error");
		exit(98);
	}
	memory = do_product(argv, &memory, string1_length, string2_length);
	print_answer(memory, length, height);
	deallocate_memory(memory, height);

	return (0);
}

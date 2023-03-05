#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int sum = 0, i = 0, min = 32, max = 126;
	char password[1000];

	srand(time(NULL));
	for (i = 0; i < 1000; i++)
		password[i] = '\0';
	i = 0;
	while (i < 1000)
	{
		password[i] = min + (rand() % (max - min + 1));
		sum += password[i];
		if (sum > 2772 || i >= 1000)
		{
			i = 0;
			sum = 0;
		}
		if (sum == 2772)
			break;
		i++;
	}
	printf("%s\n", password);

	return (0);
}
